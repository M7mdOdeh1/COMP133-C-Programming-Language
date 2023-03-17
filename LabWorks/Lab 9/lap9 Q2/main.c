#include <stdio.h>
#include <stdlib.h>

int division(int x,int y)
{int res;
 if(y==x)
    return 1;
    else
        return 1+division(x-y,y);


}

int main()
{
    int x,y;
    printf("enter two numbers \n");
    scanf("%d%d",&x,&y);
    int result=division(x,y);
    printf("the result is %d\n",result);
    return 0;
}


