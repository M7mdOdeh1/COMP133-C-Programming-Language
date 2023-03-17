#include <stdio.h>
#include <stdlib.h>
void get_rank(int);
int main()
{int x;
printf("enter the number\n");
scanf("%d",&x);
get_rank(x);

    return 0;
}

get_rank(int x)
{
    if(x<=0)
        printf("first\n");
  else  if(x>0 && x<=10)
        printf("second\n");
    else if(x>10 && x<=20)
        printf("third\n");
   else if(x>20 && x<35)
        printf("first\n");
   else if(x>=35 && x<50)
        printf("fourth\n");
   else if(x==60)
    printf("second");
   else if(x>60)
    printf("final\n");

}
