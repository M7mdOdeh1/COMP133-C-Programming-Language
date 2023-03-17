#include <stdio.h>
#include <stdlib.h>

int main()
{int x,y;
    printf("please enter the two integer\n");
    scanf("%d%d",&x,&y);
    while ((y%x)!=0)
        {
            printf("the first integer can't divide the second integer\n");
            printf("please enter another two integer\n");
          scanf("%d%d",&x,&y);
        }
       printf("the first integer divides the second integer\n");
    return 0;
}
