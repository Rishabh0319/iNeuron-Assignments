

/* ************** 1. Write a function to calculate LCM of two numbers. (TSRS) *************** */

int LCM(int num1, int num2)
{
   int max;

   max = (num1>num2) ? num1: num2;

   while(1)
   {
      if((max % num1 == 0) && (max % num2 == 0))
      {
        return max;
      }
      max++;
   }
   return 0;
}

#include<stdio.h>
void main()
{
   int n1,n2; 
   printf("enter two numbers: "); 
   scanf("%d %d",&n1,&n2);
   printf("LCM of %d and %d is %d",n1,n2,LCM(n1,n2));
}
