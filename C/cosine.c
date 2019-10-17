#include<stdio.h>

int main()
{
    int t=0,i;
    double x,sum=1,down=1.0,up=1.0;
    scanf("%lf",&x);
    for(i=2;i<9;i+=2)
    {
        up=up*x*x;
        down=down*i*(i-1);
        double k=up/down;
        if(t%2==0)
            sum-=k;
        else
            sum+=k;
        t++;
    }
    printf("%f\n",sum);
}//