/*  Name: Mohammed Owda
    No.: 1200089
*/

#include <stdio.h>
#include <stdlib.h>

void magic_numbers(int left,int right, int digit);  //function prototype

int main()
{
    int left,right,digit;
    printf("*****Welcome to the Magic numbers Program*****\n\n");
    printf("Enter Left bound:");
    scanf("%d",&left);                //ask user to enter the left bound
    printf("Enter Right bound:");
    scanf("%d",&right);                //ask user to enter the right bound
    printf("Enter digit to exclude it:");
    scanf("%d",&digit);                //ask user to enter the digit to exclude it
    printf("\n");
    if(right>left)
    magic_numbers(left,right,digit);
    else
        printf("error (the left bound greater than or equal the right bound)\n");
    return 0;
}

void magic_numbers(int left,int right,int digit)
{int orignalNum,mod,y,count=0;
printf("Magic Numbers in Range Left=%d, Right=%d with exclude digit m=%d are:\n",left,right,digit);
    for(orignalNum=left;orignalNum<=right;orignalNum++)
  {
        int ismagic=1,sum=0;
        y=orignalNum;
        while((y/10)!=0)
     {
            mod=y%10;
             y/=10;
            sum+=mod;
        if(sum>=(y%10)||(mod==digit)||(y==digit))
                {
                ismagic=0;
                break;
                }
     }
      if(y==digit)
      ismagic=0;

      if(ismagic)
      {
        printf("%d\t",orignalNum);
        count=1;
      }

  }

  if(!count)
  printf("there are no magic numbers in this interval or with this exclude digit\n");
  printf("\n");
}
