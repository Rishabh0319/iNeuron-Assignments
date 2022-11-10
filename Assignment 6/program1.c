
/* ********* 1. Write a program to calculate sum of first N natural numbers ********** */

#include<stdio.h>
void main()
{
   int num; 
   printf("Enter a number: ");
   scanf("%d",&num);
   
   int sum=0;
   for(int i=1 ; i <= num ; i++)
   {
        sum += i;
   }

   printf("Sum of %d number is: %d",num,sum);
}

