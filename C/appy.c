#include<stdio.h>
#include<stdlib.h>
#define ll long long int

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll n,k,a,b,i,ca,cb,cc;
        scanf("%lld %lld %lld %lld",&n,&a,&b,&k);
        /*for(i=1;i<=n;i++)
        {
            if(i%a==0&&i%b!=0)
                ca++;
            else if(i%a!=0&&i%b==0)
                cb++;
            if((ca+cb)>=k)
                break;
        }*/
        ca=n/a;
        cb=n/b;
        if(a%b!=0&&b%a!=0)
        {
            
            i=n/(a*b);
            cc=ca+cb-2*i;
        }
        else if(a%b==0)
        {
            cc=ca-cb;
        }
        else if(b%a==0)
        {
            cc=cb-ca;
        }
        else if(a==b)
        {
            cc=0;
        }
        if(abs(cc)>=k)
            printf("Win\n");
        else
            printf("Lose\n");
    }
    return 0;
}