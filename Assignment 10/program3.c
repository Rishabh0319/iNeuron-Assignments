

/* ************ 3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS) ************ */


#include<stdio.h>
int EvenOdd(int);
void main()
{
   int num; 
   printf("Enter a number to check Even Odd: ");
   scanf("%d",&num);

   if(EvenOdd(num))
   {
     printf("number is EVEN\n");
   }
   else
   {
    printf("number is ODD\n");
   }
   
}

int EvenOdd(int num)
{
   if(num % 2 == 0)
   { 
      return 1;
   }
   else
   {
    return 0;
   }  
}