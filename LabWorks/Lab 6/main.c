#include <stdio.h>
#include <stdlib.h>
void operation(float,float,float *,float *,float *,float *);
int main()
{float x,y,sum,sub,mult,div;
    printf("Enter the two  float number\n");
    scanf("%f%f",&x,&y);
    operation(x,y,&sum,&sub,&mult,&div);
    printf("sum=%f \nsubtraction=%f \nmultiplication=%f \n division=%f",sum,sub,mult,div);
    return 0;
}
void operation(float a,float b,float *sumPtr,float *subPtr,float *multPtr,float *divPtr)
{
    *sumPtr= a+b;
    *subPtr= a-b;
    *multPtr= a * b;
    *divPtr= a/b;
}
