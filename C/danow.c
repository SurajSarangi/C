#include <stdio.h>

int main()
{
    int i,n,q,l,r;
    scanf("%d %d",&n,&q);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    while(q--)
    {
        int k=0;
        scanf("%d %d",&l,&r);
        for(i=l-1;i<r;i++)
        {
            k+=a[i]*b[i];
        }
        printf("%d\n",k);
    }
    return 0;
}