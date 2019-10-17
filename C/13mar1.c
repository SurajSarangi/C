#include<stdio.h>
#include<stdlib.h>

int c=0;
void TOH(int n,int L,int M,int R)
{
    c++;
    if(n>0)
    {
        TOH(n-1,L,R,M);
        printf("Move %d to %d\n",L,R);
        TOH(n-1,M,L,R);
    }
}

int main()
{
    int n;
    printf("Enter no of disks\n");
    scanf("%d",&n);
    TOH(n,1,2,3);
    printf("Iterations:%d\n",c);
    return 0;
}