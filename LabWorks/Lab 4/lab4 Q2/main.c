#include <stdio.h>
#include <stdlib.h>

int main()
{int x;
    printf("Enter the number\n");
    scanf("%d",&x);
    if ((x%3)==0)
        printf("the number is divisible by 3");
    else
        printf("the number is not divisible by 3");
    return 0;

}
