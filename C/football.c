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
        int i,a[n],b[n],c[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            c[i]=a[i]*20;
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&b[i]);
            int d=b[i]*10;
            if(d>c[i])
                c[i]=0;
            else
                c[i]-=d;
        }
        int max=c[0];
        for(i=1;i<n;i++)
        {
            if(c[i]>max)
                max=c[i];
        }
        printf("%d\n",max);
    }
    return 0;
}