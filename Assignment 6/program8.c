

/* ******* 8. Write a program to check whether a given number is a Prime number or not ******** */


#include<stdio.h>
void main()
{
   int n;
   printf("Enter a number: ");
   scanf("%d",&n);
  
   int i;
   for(i=2 ; i < n ; i++)
   {
      if( n % i == 0)
      {
        break;
      }
   }

   if(i == n)
    printf("%d is prime number",n);
   else
    printf("%d is not prime number",n);
}


