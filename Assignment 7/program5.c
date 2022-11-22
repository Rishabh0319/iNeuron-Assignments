

/* **************** 5. Write a program to check whether two given numbers are co-prime numbers or not **************** */

#include<stdio.h>
void main()
{
   int num1,num2,gcd,min,i;
   printf("Enter two number to find HCF: ");
   scanf("%d %d",&num1,&num2);

   min = (num1 < num2) ? num1 : num2;
   for(i=1 ; i<=min ; i++)
   {
     if(num1%i==0 && num2%i==0)
     {
        gcd = i;
     }
   }

   if(gcd == 1)
   {
     printf("number is CO-prime");
   }
   else
   {
     printf("number is not Co-prime");
   }   
}
