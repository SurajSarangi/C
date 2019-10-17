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
        ll n,k,s2=0;
        scanf("%lld\n%lld",&n,&k);
        if(k>n)
            k=k%n;
        if(k<n)
        {
            if(n%2==0)
            {
                if(k<(n/2))
                    s2=2*k;
                else if(k==n/2)
                    s2=2*k-1;
                else
                    s2=2*(n-k);
            }
            else
            {
                if(k<=(n/2))
                    s2=2*k;
                else
                    s2=2*(n-k);
            }
        }
        else
            s2=0;
        printf("%lld\n",s2);
    }
    return 0;
}