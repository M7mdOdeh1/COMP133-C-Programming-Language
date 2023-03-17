#include <stdio.h>
#include <stdlib.h>

void printhistogram(int[]); //function prototype to print histogram of characters

int main()
{
    printf("\t\t********Character occurrences********\n\n");
    FILE *f_in;  //declare file
    int i;
    int counts[26]={0};     //declare counter array with initial vale equal zero
    char character,alph[26];

    for(i=0;i<=26;i++)  //to fill the array with characters from a to z
        alph[i]=i+'a';

    f_in=fopen("story.txt","r");    //open the file (story.txt) in reading mode
    while((fscanf(f_in,"%c",&character))!=EOF)   //keep reading characters till the end of file
  {
      if(character>='a'&&character<='z')  //to check character between a to z only
    for(i=0;i<26;i++)     //to determine the type of character
        if(character==alph[i])
       {
        counts[i]++;  //increment the counter (which is associated with the letter)
        continue;
       }
  }

  for(i=0;i<26;i++)    //print the character occurrences for each letter
          printf("%c was used %d times\n",alph[i],counts[i]);

      printhistogram(counts); //call function to print histogram
      fclose(f_in);  //close the input file
    return 0;
}

void printhistogram(int counters[])  //function definition to print a histogram of characters
{int i;
    char alph[26];
    for(i=0;i<=26;i++)  //to fill the array with characters from a to z
        alph[i]=i+'a';
        printf("\n\n\t\t********Histogram********\n");
    for(i=0;i<26;i++)     //print the ASCI character 254 for each letter based on letter occurrences
    {
        printf("\n%c ",alph[i]);
        for(int j=0;j<counters[i];j++)
        printf("%c",254);
    }
}

/* Name: Mohammed Owda
   No.:1200089
*/

