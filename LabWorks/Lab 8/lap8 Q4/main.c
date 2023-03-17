#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i=10,counter=0;
    char str[30];
    char str2[20][20]={"how","are","you"};
    gets(str);
for(i=counter;i=0;i--)
            printf("%s ",str2[i]);
    char *token;
    token=strtok(str," ");
    while(token!=NULL)
        {
        strcpy(str2[i],token);
        token=strtok(NULL," ");
        counter++,i++;
        }
        for(i=counter;i==0;i--)
            printf("%s ",str2[i]);

    return 0;
}
