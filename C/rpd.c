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
        int n;
        scanf("%d",&n);
        if(n==2)
        {
            int n1,n2;
            scanf("%d %d",&n1,&n2);
            ll p=n1*n2;
            ll sum=0;
            while(p>0)
            {
                sum+=p%10;
                p/=10;
            }
            printf("%lld\n",sum);
        }
        else
        {
            ll a[n],i,j,max=0;
            for(i=0;i<n;i++)
            {
                scanf("%lld",&a[i]);
            }
            for(i=0;i<n;i++)
            {
                for(j=i+1;j<n;j++)
                {
                    ll p=a[i]*a[j];
                    ll sum=0;
                    while(p>0)
                    {
                        sum+=p%10;
                        p/=10;
                    }
                    if(sum>max)
                        max=sum;
                }
            }
            printf("%lld\n",max);
        }
    }
    return 0;
}