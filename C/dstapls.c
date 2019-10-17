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
        ll n,k;
        scanf("%lld %lld",&n,&k);
        ll j=n/k;
        if(j%k==0)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}//