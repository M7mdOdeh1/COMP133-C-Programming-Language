#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c[10],i,min,position;
    for(i=0;i<10;i++)
    {
      printf("enter the element %d\n",i);
        scanf("%d",&c[i]);
    }
    min=c[0];

    for(i=1;i<10;i++)
      if(c[i]<min)
      {min=c[i];
      position=i;
      }

      printf("the smallest integer is %d and its postion is %d",min,position);

    return 0;
}
