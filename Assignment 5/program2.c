
/* ******* 2. Write a program to print the first N natural numbers. ******* */


#include<stdio.h>
void main()
{
   int n;
   printf("Enter a number to print n natural number: ");
   scanf("%d",&n);

   for(int i=1 ; i <= n ; i++)
   {
      printf("%d ",i);
   }
}
