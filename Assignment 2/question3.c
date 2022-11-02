
/* ********************* 3. Write a program to swap values of two int variables ********************** */

#include<stdio.h>

void main()
{
   int num1,num2,temp;

   printf("\nEnter two numbers: ");
   scanf("%d %d",&num1,&num2);

   printf("Original one: \n");
   printf("num1: %d\nnum2: %d\n\n",num1,num2);

   temp = num1;
   num1 = num2;
   num2 = temp;

   printf("swaped one: \n");
   printf("num1: %d\nnum2: %d",num1,num2);
}