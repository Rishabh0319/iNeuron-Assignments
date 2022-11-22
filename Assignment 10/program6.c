

/* *********** 6. Write a function to calculate the factorial of a number. (TSRS) ************ */

#include<stdio.h>

int factorial(int n)
{
   int fact = 1;
   for(int i=1 ; i <= n ; i++)
   {
      fact *= i;
   }
   return fact;
}

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int fact = factorial(num);
    printf("Factorial of %d is: %d",num,fact);
}

