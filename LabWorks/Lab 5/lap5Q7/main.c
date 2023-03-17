#include <stdio.h>
#include <stdlib.h>

int main()
{

int x,z;
printf("\n");
for(x=0; x<10; x++)
{
for(z=1; z<=10-x; z++)
printf(" ");
for(z=1; z<=x*2+1; z++)
printf("%d",x);
printf("\n\n");
}
return 0;
}
