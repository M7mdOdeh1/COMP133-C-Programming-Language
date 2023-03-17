/* Name : Mohammed Owda
   No.:1200089
*/

#include <stdio.h>
#include <stdlib.h>

void comp_charges(double,double*,double*);  //function prototype (with one input and two output parameters and no return value)
double round_money(double);     //function prototype (with one input parameter and return value)

int main()
{
    int cust_id,month,year,count;      //declare variables
    double hours,total_price,avg;
    FILE *f_in,*f_out;          //declare pointer files
    f_in=fopen("usage.txt","r");   //open the file "usage.txt" in read mode (for input)
    f_out=fopen("charges.txt","w");    //create the file "charges.txt" in write mode (for output)
    fscanf(f_in,"%d%d",&month,&year);    //read month and year from the input file
    fprintf(f_out,"charges for %d/%d\n",month,year);   //print month and year to the output file
    while (fscanf(f_in,"%d%lf",&cust_id,&hours)!=EOF)    //keep reading id and hours for costumers until the end of file
{  int n=cust_id;
    for(count=0;n>0;count++)    //find the number of digits for customer id
       n/=10;
    if(count==5)         //check if the customer id is five digits
    { comp_charges(hours,&total_price,&avg);   //call function to compute the total price and average cost per hour(avg) for each costumer
      total_price=round_money(total_price);   //call function to round total price to 2 decimal number
      avg=round_money(avg);                  //call function to round avg to 2 decimal number

fprintf(f_out,"%d %.2lf %.2lf %.2lf\n",cust_id,hours,total_price,avg);  //print id,hours,total price,average to the output file (i put %.2  just to remove the zeros after the second decimal number)
    }
    else
        fprintf(f_out,"please enter a five digit number for the customer id\n"); //if the id not a five digits
}
    fclose(f_in);  //close the input file
    fclose(f_out);  //close the output file
    return 0;
}

void comp_charges(double hours,double*totalPtr,double*avgPtr)  //function definition to compute the total price and average cost per hour
{
double add_hours;

   add_hours=hours-10;  //calculate the additional hours

    if(add_hours>0)      //if additional hours > 0  (means if hours > 10)
    *totalPtr = 7.99  + (add_hours * 1.99);    //set total_price to 7.99 + 1.99 for additional hours
    else                 // if additional hours <= 0  (means if hours <=10)
    *totalPtr= 7.99;          //set total_price to 7.99 (the variable which totalPtr refer to)

    *avgPtr = *totalPtr/hours;   //find the average cost per hour
}

double round_money(double x)  //function definition to round number to 2 decimal numbers
    {double rounded;
        int y;
    y = (x*100)+0.5;
    rounded=y/100.0;
    return rounded;
    }
