#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hydroxide(char[]);

int main()
{
    char hydro[10];
    printf("enter an a chemical\n");
    scanf("%s",hydro);

   int isHydro = hydroxide(hydro);

   if(isHydro)
    printf("%s is hydroxide",hydro);
   else
    printf("%s is not hydroxide",hydro);

    return 0;
}

int hydroxide(char st[10])
{
    char st2[10];
    int i=0,j;
    strcpy(st2,st);
    strtok(st2,"OH");

if(strcmp(st,st2)==0)
    return 0;
else
    return 1;


}
