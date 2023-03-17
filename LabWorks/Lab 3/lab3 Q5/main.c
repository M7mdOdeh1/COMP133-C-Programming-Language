#include <stdio.h>
#include <stdlib.h>
float Area(float);
float inch_cm(float);
int main()
{float L,A_inch,A_cm;
    printf("please enter the length in inches\n");
    scanf("%f",&L);
 A_inch=Area(L);
 A_cm=inch_cm(A_inch);
 printf("the Area in inches is %f \nthe area in cm is \r%f",A_inch,A_cm);

    return 0;
}
float Area(float L)
{
    return pow(L,2);
}

float inch_cm(float A)
{
return (A*6.4516);
}
