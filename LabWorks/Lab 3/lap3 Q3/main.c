#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159

double Area(double);
double Volume(double,double);
int main()
{
    double r,h,area,volume;
    printf("please enter the radius and the height\n");
    scanf("%lf%lf",&r,&h);
    area=Area(r);
    volume=Volume(r,h);
    printf("the Area is %lf \nthe Volume is %lf",area,volume);
    return 0;
}
double Area(double r)
{
    return (2*PI*r);
}
double Volume(double r,double h)
{
    return (pow(r,2)*PI*h);
}
