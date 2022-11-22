

/* *************** 4. Write a program to calculate HCF of two numbers ***************** */


#include<stdio.h>
void main()
{
   int num1,num2,hcf=1;
   int min,i;

   printf("Enter any two number to find HCF: ");
   scanf("%d %d",&num1,&num2);
   min = (num1<num2) ? num1 : num2;

   for(i=1; i<=min; i++)
   {
      if(num1%i==0 && num2%i==0)
      {
        hcf = i;
      }
   }

   printf("HCF of %d and %d is %d",num1,num2,hcf);
}

