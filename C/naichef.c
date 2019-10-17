#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,a,b,i,ca=0,cb=0;
        scanf("%lld %lld %lld",&n,&a,&b);
        long long int x[n];
        for(i=0;i<n;i++)
            scanf("%lld",&x[i]);
        fflush(stdin);
        for(i=0;i<n;i++)
        {
            if(x[i]==a)
                ca++;
            if(x[i]==b)
                cb++;
        }
        printf("%.10f\n",(((double)ca/n)*((double)cb/n)));
    }
}