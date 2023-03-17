#include <stdio.h>
#include <stdlib.h>

int main()
{int x,y,isprime;
    printf("please enter the integer\n");
   scanf("%d",&x);
if (x>=2){
    for(y=2;x>y;y++)
    {
        if ((x%y)==0)
            isprime=1;
            break;
    }
    if (isprime)
        printf("The integer is not Prime");
    else printf("The integer is Prime");
}
else printf("error\n");
    return 0;
}
