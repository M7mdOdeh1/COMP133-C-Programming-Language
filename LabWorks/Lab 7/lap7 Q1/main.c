#include<stdio.h>
int main(){
int a[5],b[5],i;
for(i=0;i<5;i++)
{
    a[i]=2;
    printf("enter the array elements\n");
scanf("%d",&b[i]);
}
int c;
for(i=0;i<5;i++)
    {
        c=a[i];
        a[i]=b[i];
        b[i]=c;
    }
    for(i=0;i<5;i++)
    printf("a[%d]=%d\t b[%d]=%d\n",i,a[i],i,b[i]);

   return 0;
}
