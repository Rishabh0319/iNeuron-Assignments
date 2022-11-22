
/* *************** 2. Write a function to calculate simple interest. (TSRS) ***************** */


#include<stdio.h>
float SI(float,float,float);

void main()
{
   float principle,rate,time,SIresult;

   printf("Enter Principle, rate, time (respectively): ");
   scanf("%f %f %f",&principle,&rate,&time);
   SIresult = SI(principle,rate,time);

   printf("\nSimple Interest = %.2f\n", SIresult);
}

float SI(float p, float r, float t)
{
   return (p*r*t)/100;
}