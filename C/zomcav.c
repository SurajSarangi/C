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
        ll n;
        scanf("%lld",&n);
        ll c[n],h[n],i;
        for(i=0;i<n;i++)
        {
            c[i]=0;
            h[i]=0;
        }
        for(i=0;i<n;i++)
        {
            ll j,k,d;
            scanf("%lld",&d);
            c[i]++;
            for(j=1;j<=d;j++)
            { 
                if(j>=0 && j<n)
                {
                    c[j]++;
                }
                k=i+j;
                if(k>=0 && k<n)
                {
                    c[k]++;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            scanf("%lld",&h[i]);
        }
        for(i=0;i<n;i++)
        {
            printf("%lld\n",c[i]);
        }
    }
    return 0;
}//