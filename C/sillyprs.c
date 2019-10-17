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
        ll n,i;
        scanf("%lld",&n);
        ll a[n],b[n],sa=0,sb=0,cea=0,ceb=0,coa=0,cob=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            sa+=a[i];
            if(a[i]%2==0)
                cea++;
            else
                coa++;
        }
        for(i=0;i<n;i++)
        {
            scanf("%lld",&b[i]);
            sb+=b[i];
            if(b[i]%2==0)
                ceb++;
            else
                cob++;
        }
        ll e=abs(cea-ceb);
        ll o=abs(coa-cob);
        ll ss=(e+o)/2;
        double s3=((double)sa+(double)sb)/2;
        s3=s3-(0.5*ss);
        ll s4=floor(s3);
       
        printf("%lld\n",s4);
    }
    return 0;
}






