#include <stdio.h>
#include <stdlib.h>

int main()
{char x;
    printf("please enter the character\n");
    scanf("%c",&x);
    if(x=='a'||x=='e'||x=='o'||x=='i'||x=='u'||x=='A'||x=='E'||x=='O'||x=='I'||x=='U')
        printf("the character is vowel");
     else
        printf("the character is consonant");
    return 0;
}
