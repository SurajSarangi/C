#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t,n;
    scanf("%d",&t);
    start:
    while(t--)
    {
        scanf("%d",&n);
        int i,a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int top=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==1)
                top++;
            else
            {
                if(top==0)
                {
                    printf("Invalid\n");
                    goto start;
                }
                top--;
            }
        }
        if(top>=0)
            printf("Valid\n");
    }
}