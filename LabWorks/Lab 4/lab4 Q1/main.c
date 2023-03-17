#include <stdio.h>
#include <stdlib.h>

int main()
{float grade;
    printf("Enter the grade\n");
    scanf("%f",&grade);
    if (grade>=60)
        printf("pass\n");
    else
        printf("fail\n");
    return 0;
}
