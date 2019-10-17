#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,x,i,a,c=0;
        scanf("%lld %lld",&n,&x);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a);
            if(a>=x)
                c++;
        }
        if(c>0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}