#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printResult(int[],char[1000][50],double[1000][6],int);
void id_asc(int[],char[1000][50],double[1000][6],int);
void name_asc(int[],char[1000][50],double[1000][6],int);
void score_desc(int[],char[1000][50],double[1000][6],int);
void id_search(int[],char[1000][50],double[1000][6],int);
void name_search(int[],char[1000][50],double[1000][6],int);

int main()
{
    FILE *f_in;
    int id[1000]={0},count=0,stu_count=0,i;
    char name[1000][50]={0},in_name[50],temp[300]={0},*token;
    double scores[1000][6];
printf("enter the name of the file you want read from: ");            //ask the user to enter the file name
    for(gets(in_name);(f_in=fopen(in_name,"r"))==NULL;gets(in_name))  //ask the user to enter the name again if the file does not exist
        printf("please enter an existing file: ");


for(i=0;fgets(temp,300,f_in);i++,count=0,stu_count++)   //read the data from the file line by line
  { token=strtok(temp,"$");
      while(token!=NULL)     //separate each column and save it
      {
       if(count==0)
        id[i]=atoi(token);          //atoi function used to convert string to integer

        else if(count==1)
            strcpy(name[i],token);

        else if(count==2)
            scores[i][0]=atof(token);      //atof function used to convert string to double

        else if(count==3)
            scores[i][1]=atof(token);

        else if(count==4)
            scores[i][2]=atof(token);

        else if(count==5)
           scores[i][3]=atof(token);

        else if(count==6)
            scores[i][4]=atof(token);

  token=strtok(NULL,"$");
  count++;
       }

  }

 for(i=0;i<stu_count;i++)     //find the grade(all scores with grade are saved in the same array)
   scores[i][5]=scores[i][0]*0.15+scores[i][1]*0.15+scores[i][2]*0.25+scores[i][3]*0.10+scores[i][4]*0.35;

   int menu;
 while(1)    //keep running the program until the user enter number 6(break)
{

   printf("\n\n1) Sort data in ascending order according to students' IDs and then display it.\n2)Sort data in ascending order according to students' names and then display it.\n3)Sort data in descending order according to students' scores and then display it.\n");
   printf("4) Enter a student ID and display his score.\n5) Enter a student name and display his score.\n6)Exit the program\n");
     printf("\nplease enter the number of the choice:");

    for(scanf("%d",&menu);menu<1||menu>6;scanf("%d",&menu)) //just receive number between 1 and 6
        printf("\nplease enter a number from 1 to 6:");

    if(menu==1)
       id_asc(id,name,scores,stu_count);
    else if (menu==2)
        name_asc(id,name,scores,stu_count);
    else if(menu==3)
        score_desc(id,name,scores,stu_count);
    else if(menu==4)
        id_search(id,name,scores,stu_count);
    else if(menu==5)
        name_search(id,name,scores,stu_count);
    else
      {
       printf("\nThe program has been closed.\n");
       break;    //exit the while loop and end the program.
      }
}

fclose(f_in); //close the input file
    return 0;
}

void id_asc(int id[],char name[1000][50],double scores[1000][6],int stu_count)   //function to sort the data according to students' id ascending
{
    int i,j,temp;
    char temp2[50];
    double temp3;

    for(i=0;i<stu_count;i++)
        for(j=i+1;j<stu_count;j++)
    {
     if(id[i]>id[j])              //swap id
       {temp=id[i];
       id[i]=id[j];
       id[j]=temp;
        strcpy(temp2,name[i]);           //swap names
        strcpy(name[i],name[j]);
        strcpy(name[j],temp2);

          for(int k=0;k<6;k++)
          {
              temp3=scores[i][k];              //swap scores
              scores[i][k]=scores[j][k];
              scores[j][k]=temp3;
          }

       }
    }
   printResult(id,name,scores,stu_count);

}




void name_asc(int id[],char name[1000][50],double scores[1000][6],int stu_count) //function to sort the data according to student name ascending
{
    int i,j,temp;
    char temp2[50];
    double temp3;

    for(i=0;i<stu_count-1;i++)
        for(j=i+1;j<stu_count;j++)
    {
        if (strcmp(name[i],name[j])>0)
       {
       temp=id[i];
       id[i]=id[j];
       id[j]=temp;
        strcpy(temp2,name[i]);
        strcpy(name[i],name[j]);
        strcpy(name[j],temp2);

          for(int k=0;k<6;k++)
          {
              temp3=scores[i][k];
              scores[i][k]=scores[j][k];
              scores[j][k]=temp3;
          }

       }
    }
   printResult(id,name,scores,stu_count);

}

void score_desc(int id[],char name[1000][50],double scores[1000][6],int stu_count)  //function sort the data according to scores descending
{
    int i,j,temp;
    char temp2[50];
    double temp3;

    for(i=0;i<stu_count;i++)
        for(j=i+1;j<stu_count;j++)
    {
     if(scores[i][5]<scores[j][5])
       {
       temp=id[i];
       id[i]=id[j];
       id[j]=temp;
        strcpy(temp2,name[i]);
        strcpy(name[i],name[j]);
        strcpy(name[j],temp2);

          for(int k=0;k<6;k++)
          {
              temp3=scores[i][k];              //sort the scores
              scores[i][k]=scores[j][k];
              scores[j][k]=temp3;
          }

       }
    }
   printResult(id,name,scores,stu_count);

}

void id_search(int id[],char name[1000][50],double scores[1000][6],int stu_count)    //function to search by students' id
{ int idsearch,exist=0;
    printf("\nPlease enter the student id:");
    scanf("%d",&idsearch);

     for(int i=0;i<stu_count;i++)
        if(idsearch==id[i])
            {
             printf("\nID\tName\t\t\tassignment//quizzes//Midterm//Practical exam//final//grade\n");
             printf("%d  %s\t\t",id[i],name[i]);
               for(int j=0;j<6;j++)
                  printf("%.2lf\t  ",scores[i][j]);
             exist=1;
             break;
            }

        if(!exist)
        printf("\nthe student not found!!!!!\n");
}

void name_search(int id[],char name[1000][50],double scores[1000][6],int stu_count) //function to search by students' name
{
  char firstname[50],lastname[50];
  int exist=0;

    printf("\nEnter the first name(Capitalize the first letter): ");
    scanf("%s",firstname);
    printf("Enter the last name(Capitalize the first letter): ");
    scanf("%s",lastname);
    strcat(firstname," ");
    strcat(firstname,lastname);

     for(int i=0;i<stu_count;i++)
      if(strcmp(firstname,name[i])==0)
         {
            printf("\nID\tName\t\t\tassignment//quizzes//Midterm//Practical exam//final//grade\n");
            printf("%d  %s\t\t",id[i],name[i]);
              for(int j=0;j<6;j++)
                printf("%.2lf\t  ",scores[i][j]);
                     exist=1;
                   break;
            }
            if(!exist)
            printf("\n\nthe student not found!!!!!\n");

}

void printResult(int id[],char name[1000][50],double scores[1000][6],int stu_count)  //function to display the data and ask the user if he want to save it in file
{ int save;
  char out_name[50];
  FILE *f_out;
    printf("\n+===================================================================================================================+\n");
    printf("ID\tFull name\t\tAssignments // Quizzes // Midterm // Practical // final // grade\n");
    printf("+===================================================================================================================+\n");
    for(int i=0;i<stu_count;i++)
    {
      printf("\n%d\t%s\t\t ",id[i],name[i]);
         for(int j=0;j<6;j++)
            printf("%.2lf    ",scores[i][j]);
    }
printf("\n======================================================================================================================+\n");

printf("\nwould you like to save this result in a file? (enter 1 for yes and 0 for no)\n");
    for(scanf("%d",&save);save!=1&&save!=0;scanf("%d",&save))  //keep asking the user to enter a number until he enter 1 or 0
        printf("please enter 1 or 0 only :");

  if(save)
  {
    printf("Enter the name of the file you want to save the results to: ");
       scanf("%s",out_name);
       f_out=fopen(out_name,"w");
         printf("\nin progress.....\n");

      fprintf(f_out,"\n+===================================================================================================================+\n");
    fprintf(f_out,"ID\tFull name\t\tAssignments // Quizzes // Midterm // Practical // final // grade\n");
    fprintf(f_out,"+===================================================================================================================+\n");
    for(int i=0;i<stu_count;i++)
    {
      fprintf(f_out,"\n%d\t%s\t\t ",id[i],name[i]);
         for(int j=0;j<6;j++)
            fprintf(f_out,"%.2lf    ",scores[i][j]);
    }
fprintf(f_out,"\n======================================================================================================================+\n");
printf("it's done.");
   fclose(f_out);
  }

}
