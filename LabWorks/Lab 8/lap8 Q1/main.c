#include <stdio.h>
#include <stdlib.h>

int main()
{int row=4,col=4,a[row][col],b[row][col],sum[row][col],i,j;
    printf("enter the elements of first array\n");
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
        scanf("%d",&a[i][j]);
     printf("\nenter the elements of second array\n");

     for(i=0;i<row;i++)
        for(j=0;j<col;j++)
        {scanf("%d",&b[i][j]);
        sum[i][j] = a[i][j] + b[i][j];
        }

        int count=0;
        printf("\nthe sum array is:\n");
        for(i=0;i<row;i++)
         for(j=0;j<col;j++)
            {printf("%d\t",sum[i][j]);
            count++;
            if(count%col==0)
                printf("\n");
            }

    return 0;
}
