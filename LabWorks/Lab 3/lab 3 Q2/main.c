#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double distanse(double,double,double,double);
int main()
{
 double x1,y1,x2,y2,dist;
 FILE *num_in;
 FILE *num_out;
 num_in=fopen("input.txt","r");
 num_out=fopen("output.txt","w");
 fscanf(num_in,"%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
 dist= distanse(x1,y1,x2,y2);
 fprintf(num_out,"the distance is %lf",dist);
 fclose(num_in);
 fclose(num_out);
    return 0;
}

double distanse(double x1,double y1,double x2,double y2)
{
   return sqrt(pow((x2-x1),2)+pow((y2-y1),2));

}
