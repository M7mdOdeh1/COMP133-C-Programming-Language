#include <stdio.h>

#include <stdlib.h>



int sum_of_digits(int);



int main()

{

int x;

printf("enter the number\n");

scanf("%d",&x);



int sum = sum_of_digits(x);

printf("the sum of odd digits is %d\n",sum);





return 0;

}



int sum_of_digits(int x)

{

    int mod,sum=0;

    while(x!=0)

        {

        mod= x%10;

          if((mod%2)!=0)

          sum+=mod;

          x/=10;

        }

    return sum;

}

