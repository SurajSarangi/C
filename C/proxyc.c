#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int d;
        scanf("%d",&d);
        char c[d];
        scanf("%s",c);
        int i,co=0,cp=0;
        for(i=0;i<d;i++)
        {
            if(c[i]=='P')
                cp++;
        }
        double atn;
        int flag=0;
        atn=((double)cp/d);
        if(atn>=0.75)
        {
            printf("0\n");
            flag=1;
        }
        else
        {
            for(i=2;i<d-2;i++)
            {
                if(c[i]=='A')
                {
                    if(c[i-1]=='P'||c[i-2]=='P')
                    {
                        if(c[i+1]=='P'||c[i+2]=='P')
                        {
                            cp++;co++;
                            atn=((double)cp/d);
                            if(atn>=0.75)
                            {
                                flag=1;
                                printf("%d\n",co);
                                break;
                            }
                        }
                    }
                }
            }
        }
        if(flag==0)
        {
            printf("-1\n");
        }
    }
    return 0;
}