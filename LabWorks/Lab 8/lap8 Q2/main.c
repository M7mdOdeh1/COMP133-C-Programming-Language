#include <stdio.h>
#include <stdlib.h>

int main(){

int i,j;
char str[5][20],tem[20];

printf("Enter countries:\n");
for(i=0;i<5;i++)
gets(str[i]);

for(i=0;i<4;i++)
for(j=i+1;j<5;j++)
{
if(strcmp(str[i],str[j])>0)
  {
strcpy(tem,str[i]);
strcpy(str[i],str[j]);
strcpy(str[j],tem);
  }
}

printf("\nOrder of Sorted counters\n");

for(i=0;i<5;i++)
puts(str[i]);

return 0;
}
