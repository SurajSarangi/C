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
        ll x,y,k,d,q;
        scanf("%lld %lld %lld",&x,&y,&k);
        d=x+y;
        q=d/k;
        //printf("%lld\t%lld\n",d,q);
        if(q%2==0)
            printf("Chef\n");
        else
            printf("Paja\n");
    }
    return 0;
}