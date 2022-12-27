
/* *************** 1. Write a function to swap values of two in variables of calling function. **************** */


#include<stdio.h>
void swap(int*,int*);
void main()
{
   int num1,num2;
   printf("enter two numbers: ");
   scanf("%d %d",&num1,&num2);

   printf("Befor Swaping...\n");
   printf("num1 = %d\nnum2 = %d\n",num1,num2);

   swap(&num1,&num2);

   printf("After Swaping...\n");
   printf("num1 = %d\nnum2 = %d\n",num1,num2);
}


void swap(int *x,int *y)
{
   int temp = *x;
   *x = *y;
   *y = temp;
}

