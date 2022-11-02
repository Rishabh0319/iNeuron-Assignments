

/* ****************** 9. Write a program to make the last digit of a number stored in a variable as zero. (Example - if x=2345 then make it x=2340) ****************** */


#include<stdio.h>
void main()
{
   printf("Enter a number: ");
   int num;
   scanf("%d",&num); 

   printf("Original one: %d\n", num);
   num = num / 10;
   num = (num*10+0);
   printf("add Zero in unit place: %d",num);
}