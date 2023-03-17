#include <stdio.h>
#include <stdlib.h>

int main()
{int x,y,R,op;

    printf("please enter the first number\n");
    scanf("%d",&x);
    printf("please enter the second number\n");
     scanf("%d",&y);
   printf("type \n1 for addtion\n2 for subtraction\n3 for multiplication\n4 for division\n5 for remainder\n");
   scanf("%d",&op);


    switch (op){
        case 1: R=x+y;
             printf("the Result is %d\n",R);
                  break;
        case 2: R=x-y;
        printf("the Result is %d\n",R);
                  break;
        case 3: R=x*y;
        printf("the Result is %d\n",R);
                  break;
        case 4:
        if(y==0)
            printf("can't divide by zero\n");
     else  {R=x/y;
      printf("the Result is %d\n",R);
     }
                  break;
        case 5: R=x%y;
        printf("the Result is %d\n",R);
                   break;
        default:
            printf("the operation is invalid\n");
            break;
    }

    return 0;
}
