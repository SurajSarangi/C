#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comp(const void *a, const void *b)
{
    long long int f = *((long long int*)a);
    long long int s = *((long long int*)b);
    if(f>s) return 1;
    if(f<s) return -1;
    return 0;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,i;
        scanf("%lld",&n);
        long long int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        int flag=0;
        qsort(a,n,sizeof(long long int),comp);
        for(i=0;i<n-1;i++)
        {
            if(a[i]==a[i+i])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            printf("Yes\n");
        else    
            printf("No\n");
    }
    return 0;
}