#include <stdio.h>
#include <stdlib.h>

void compute_sum(int[],int[],int,int[]);

int main()
{
int size;
   printf("enter the size\n");
   scanf("%d",&size);
int a[size],b[size],sum[size],i;

   for(i=0;i<size;i++)
        { printf("enter the element %d for both array\n",i);
            scanf("%d",&a[i]);
            scanf("%d",&b[i]);
        }
        compute_sum(a,b,size,sum);
        for(i=0;i<size;i++)
 printf("the sum of element %d is %d\n",i,sum[i]);

    return 0;
}

void compute_sum(int a[],int b[],int size,int c[])
{int j;
       for(j=0;j<size;j++)
          c[j]=a[j]+b[j];


}
