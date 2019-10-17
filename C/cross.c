#include<stdio.h>

int main()
{
    double ux,uy,uz,vx,vy,vz,wx,wy,wz;
    scanf("%lf %lf %lf",&ux,&uy,&uz);
    scanf("%lf %lf %lf",&vx,&vy,&vz);
    double ax=uy*vz-vy*uz,ay=vx*uz-ux*vz,az=ux*vy-vx*uy;
    scanf("%lf %lf %lf",&wx,&wy,&wz);
    double res=ax*wx+ay*wy+az*wz;
    printf("%lf\n",res);
}
