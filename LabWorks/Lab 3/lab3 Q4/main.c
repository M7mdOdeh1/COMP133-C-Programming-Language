#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void rounding(float);
int main()
{float x;
    printf("please enter the number\n");
    scanf("%f",&x);
    rounding(x);
    return 0;
}
void rounding(float x)
{double y;
y=floor(x*100);
if ((x*100-y)>=0.5)
    y++;
y=y/100;
printf("the rounded number is %lf\n",y);

}
