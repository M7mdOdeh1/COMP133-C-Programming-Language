#include <stdio.h>
#include <stdlib.h>
int f(int,int);
int main()
{
 int x,y,sum;
 printf("please enter the number");
 scanf("%d%d",&x,&y);
 sum=f(x,y);
 printf("the sum is %d \n",sum);
 return 0 ;
}
int f(int x,int y)
{
   return (x+y);
}
