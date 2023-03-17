#include <stdio.h>
#include <stdlib.h>

int isPerfect(int);

int main()
{
    int n,isperfect;
    printf("enter a number\n");
    scanf("%d",&n);
    isperfect=isPerfect(n);

    if (isperfect)
    printf("%d is a perfect number",n);
    else
        printf("%d is not a perfect number",n);

    return 0;
}

int isPerfect(int n)
{int sum=0,i,isperfect;
    for(i=1;i<n;i++)
    {
        if((n%i)==0)
            sum+=i;
    }
        if(n==sum)
            isperfect=1;
        else
        isperfect=0;

        return isperfect;
}
