

/* ********* 4. Write a function to print first N natural numbers (TSRN) ********** */

#include<stdio.h>
void naturalN(int);

void main()
{
   int n; 
   printf("Enter a number: ");
   scanf("%d",&n);
   naturalN(n);
}

void naturalN(int num)
{
   int i=1; 
   while(i <= num)
   {
      printf("%d ",i);
      i++;
   }
}


