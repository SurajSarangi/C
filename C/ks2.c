#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long sum=0,i;
        char n[18];
        scanf("%s",n);
        int l=strlen(n);
        for(i=0;i<l;i++)
        {
            sum+=((int)n[i]-48);
        }
        //printf("%lld\n",sum);
        for(i=0;;i++)
        {
            if((sum+i)%10==0)
                break;
        }
        //printf("%lld\n",i);
        n[l]=(char)(i+48);
        for(i=0;i<=l;i++)
        {
            printf("%c",n[i]);
        }
        printf("\n");
    }
    return 0;
}