#include <stdio.h>
#include <stdlib.h>

void sort(int [],int size);

int main()
{
    int size=10,a[size],i;
    printf("enter the elements\n");
    for (i=0;i<size;i++)
        scanf("%d",&a[i]);
    sort(a,size);
    printf("the elements is\n");
    for (i=0;i<size;i++)
        printf("%d\n",a[i]);
    return 0;
}

void sort(int a[10],int size)
{
    int i,j,temp;
    for(i=0;i<size-1;i++)
        for(j=i+1;j<size;j++)
    {
    if (a[i]<a[j])
    {temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    }
}
}
