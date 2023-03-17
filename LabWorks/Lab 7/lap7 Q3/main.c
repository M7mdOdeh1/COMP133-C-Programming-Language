#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,size,count=0;
    char c[size];
    printf("enter the size\n");
    scanf("%d",&size);

     printf("enter the elements\n");
    for(i=0;i<10;i++)
    {
    scanf("%c",&c[i]);
    if(c[i]=='a'||c[i]=='o'||c[i]=='u'||c[i]=='i'||c[i]=='A'||c[i]=='O'||c[i]=='U'||c[i]=='I'||c[i]=='e'||c[i]=='E')
        count++;
    }
    printf("the number of vowel is %d\n",count);
    return 0;
}
