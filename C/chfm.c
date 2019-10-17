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
        ll n,i,sum=0;
        scanf("%lld",&n);
        ll a[n];
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            sum+=a[i];
        }
        double mean=(double)sum/n;
        for(i=0;i<n;i++)
        {
            double mean2=((double)sum-a[i])/(n-1);
            if(mean2==mean)
            {
                break;
            }
        }
        if(i==n)
            printf("Impossible\n");
        else
            printf("%lld\n",i+1);
        
    }
    return 0;
}