#include <stdio.h>
#include <stdlib.h>

int main()
{int min,n2,n3,n4,n5;

    printf("please enter the five integers\n");
    scanf("%d %d %d %d %d",&min,&n2,&n3,&n4,&n5);
    if(min>n2)
        min=n2;
     if(min>n3)
        min=n3;
      if(min>n4)
        min=n4;
     if(min>n5)
        min=n5;
    printf("the smallest number is %d\n",min);
    return 0;
}
/*
int main()
{int n1,n2,n3,n4,n5;

    printf("please enter the five integers\n");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    if(n1<n2 && n1<n3 && n1<n4 && n1<n5)
        printf("the smallest number is %d\n",n1);
    else if(n2<n1 && n2<n3 && n2<n4 && n2<n5)
      printf("the smallest number is %d\n",n2);
    else if(n3<n1 && n3<n2 && n3<n4 && n3<n5)
      printf("the smallest number is %d\n",n3);
    else if(n4<n1 && n4<n2 && n4<n3 && n4<n5)
      printf("the smallest number is %d\n",n4);
      else
        printf("the smallest number is %d\n",n5);
      return 0;
}
*/
