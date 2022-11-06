

/* ********* 13. Write a program to check whether a given number is divisible by 3 and divisible by 2. ********** */


#include<stdio.h>
void main()
{
   int num;
   printf("Enter a number: "); 
   scanf("%d",&num);

   if(num % 2 == 0)
   {
      printf("Number is divisible by 2");  
   }
   else if(num % 3 == 0)
   {
      printf("number is divisible by 3");
   }
   else
   {
    printf("number is not divisible by any one");
   }
   
}


