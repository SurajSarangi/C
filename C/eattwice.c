#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ll long long int

int comparetor (const void * a, const void * b)
{
	return ( *(int*)a - *(int*)b );
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll n,m,i;
        scanf("%lld %lld",&n,&m);
        ll d[n];
        for(i=0;i<n;i++)
        {
            d[i]=0;
        }
        for(i=0;i<n;i++)
        {
            ll k,l;
            scanf("%lld %lld",&k,&l);
            if(l>d[k])
            {
                d[k]=l;
            }
        }
        ll c=sizeof(d)/8;
        qsort(d,c,sizeof(ll),comparetor);
        printf("%lld %lld %lld %lld",c,d[0],d[1],d[2]);
        //printf("%lld\n",(d[c-1]+d[c-2]));
    }
    return 0;
}