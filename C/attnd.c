#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i=0,j,flag;
        char n1[n][100],n2[n][100];
        scanf("%d",&n);
        while(n--)
        {
            scanf("%s %s",n1[i],n2[i]);
            i++;
        }
        for(i=0;i<n;i++)
        {
            flag=0;
            for(j=0;j<n;j++)
            {
                if(strcmp(n1[i],n1[j])==0)
                flag++;
            }
            if(flag>1)
                printf("%s %s\n",n1[i],n2[i]);
            else
                printf("%s\n",n1[i]);
        }
    }
    return 0;
}