#include <stdio.h>
#include <stdlib.h>
double fh_kv(double);
int main()
{
    double temp_fh,temp_kv;
    printf("please enter the temperature in fahrenheit\n");
    scanf("%lf",&temp_fh);
    temp_kv=fh_kv(temp_fh);
    printf("Temperature in Kelvin = %lf K\n",temp_kv);
    return 0;
}
double fh_kv(double fh)
{double K=(5.000000/9.000000);

    return K;
}
