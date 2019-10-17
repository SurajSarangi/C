#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ll long long int

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,m=0;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        char u[n];
        scanf("%s",u);
        for(i=0;i<n;i++)
        {
            if(u[i]==s[i])
            {
                m++;
                continue;
            }
            else if(u[i]=='N')
            {
                continue;
            }
            else
            {
                if(i==n-1)
                    break;
                i++;
            }
        }
        printf("%d\n",m);
    }
    return 0;
}