#include <stdio.h>
#include <stdlib.h>


int main()
{int x=2;
int count=1;


while (count<=50)
   {int isprime=1;
        for(int y=2;x>y;y++)
    {
        if ((x%y)==0){
            isprime=0;
            break;
        }
    }
        if (isprime){
   count++;
   printf("%d is a prime\n",x);
   }
   x++;
}
return 0;
}


