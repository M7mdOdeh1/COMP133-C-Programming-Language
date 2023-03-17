#include <stdio.h>
#include <stdlib.h>

int main()
{char c;
 int counter=1;
for(c='A'; c<='Z';c++,counter++)
{
    printf("%c\t",c);
    if (counter%4==0)
        printf("\n");
}
    return 0;
}
