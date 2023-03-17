#include <stdio.h>
#include <stdlib.h>

void comp_charge(int[],int [],int,int*);

int main()
{
    int size,i,totalcharge,totalkwh;
    printf("Enter the number of customers\n");
    scanf("%d",&size);
   int cust[size],kwh[size],charge[size];
   printf("enter the customer id and KWH used\n");
   for(i=0;i<size;i++)
    {
     scanf("%d%d",&cust[i],&kwh[i]);
    }

    comp_charge(kwh,charge,size,&totalkwh);

    for(i=0;i<size;i++)
     {
     totalcharge+=charge[i];
     }
     printf("\ncustomer number\t Killowatt-hours Used\t charges\n");
     for(i=0;i<size;i++)
        printf("%d \t\t %d \t\t\t %d\n",cust[i],kwh[i],charge[i]);
        printf("\nThe number of customers = %d \ntotal charge = %d \ntotal kwh = %d\n",size,totalcharge,totalkwh);

    return 0;
}

void comp_charge(int kwh[],int charge[],int size,int*totalkwh)
{int i;
    for(i=0;i<size;i++)
    {int temp=kwh[i];
         *totalkwh+=kwh[i];
        if(temp<=300)
         {charge[i]=9*temp;
         continue;
         }
        if(temp>300)
        {
         charge[i]+=300*9;
         temp-=300;

         if(temp<=300)
            {charge[i]+=temp*8;
            continue;
            }
         if(temp>300)
         {
             charge[i]+=8*300;
             temp-=300;
         }
         if(temp<=400)
            {charge[i]+=temp*6;
            continue;
            }
         if (temp>400)
         {charge[i]+=400*6;
          temp-=400;
          charge+=5*temp;
         }

        }

    }





}
