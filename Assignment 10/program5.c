
/* *************** 5. Write a function to print first N odd natural numbers. (TSRN) **************** */


#include<stdio.h>

void printOdd(int n)
{ 
   for(int i=1 ; i <= n ; i++)
   { 
      if(i % 2 != 0)
        printf("%d ",i);
   }
}

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printOdd(num);
}
