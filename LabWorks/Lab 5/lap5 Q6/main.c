#include <stdio.h>
#include <stdlib.h>

int Isprime(int);

int main()
{int x=2;
int count=1;

   while (count<=50)
   { if (Isprime(x)){
   count++;
   printf("%d is a prime\n",x);
   }
   x++;


}

return 0;
}
int Isprime(int x)

{
    int isprime=1;
    for(int y=2;x>y;y++)
    {
        if ((x%y)==0){
            isprime=0;
            break;

        }

    }
    return isprime;
}
