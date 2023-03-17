#include <stdio.h>
#include <stdlib.h>

int main()

{int a1[2][5],a2[5],i,j;
for(i=0;i<2;i++)
    for(j=0;j<5;j++)
   scanf("%d",&a1[i][j]);
sum(a1,a2);
for(i=0;i<5;i++)

    printf("%d ",a2[i]);



    return 0;

}



void sum(int b1[2][5],int b2[5])
{int i;



for(i=0;i<5;i++)

{

    b2[i]=b1[0][i]+b1[1][i];

}





}

