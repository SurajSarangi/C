#include<stdio.h>
#include<stdlib.h>
int k=0,sum=0,s1=0;
int main()
{
    int n;
    scanf("%d",&n);
    int k=alicot(n);
    return 0;
}
void alicot(int n)
{
    k++;
    int s=0,i;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
            s=s+i;
    }
    sum=sum+s;
    if(s==n&&k==1)
        printf("The number is perfect");
    if(s+s1==sum&&k==2)
    {
        printf("\nThe number is amicable");
    }
    else
    {
        s1=s;
        n=s;
        s=0;
        if(s==n)
            printf("The number is in infinity cycle");
        else if(k>=3)
        {
            printf("The number is sociable number");
        }
        else 
        {
            alicot(n);
        }
    }
}