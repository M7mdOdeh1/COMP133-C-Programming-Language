#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int pal(char x[],int len,int z)
{
    if(z==len)
      return 1;
    if(x[z]!=x[len])
      return 0;
    if(z<len+1)
      return pal(x,z+1,len-1);

      return 1;
}


int main()
{  int z=0;
   char a[50];
    printf("ENTER a string\n");
    scanf("%s",a);
int len=strlen(a);
int res=pal(a,len-1,z);

if(res)
printf("palindrome\n");
else
        printf("not palindrome\n");

}

