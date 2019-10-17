#include<stdio.h>
#include<stdlib.h>

int a[10];
void sort();
int main()
{
    int i;
    printf("Enter 10 nos.\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    sort();
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}

void sort()
{
    int i,j;
    for(i=0;i<9;i++)
    {
        for(j=0;j<9-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}