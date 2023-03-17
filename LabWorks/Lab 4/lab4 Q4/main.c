#include <stdio.h>
#include <stdlib.h>
double Area(double,double,double);
int main()
{double a,b,c;
    printf("please enter the sides a,b and c");
    scanf("%lf%lf%lf",&a,&b,&c);
    if ((a+b)>c&&(b+c)>a&&(a+c)>b)
    {
        double area=Area(a,b,c);
        printf("the area is %lf",area);
    }
else
    printf("error");
    return 0;
}
double Area(double a,double b,double c)
{double s;
 s=(a+b+c)/2;
  return (sqrt(s*(s-a)*(s-b)*(s-c)));
}
