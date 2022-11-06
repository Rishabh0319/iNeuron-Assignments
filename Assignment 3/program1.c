

/*  ********************* 1. Write a program to check whether a given number is positive or non positive. *********************  */


#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num > 0)
      printf("number is Positive");
    if(num < 0 || num == 0)  
    printf("number is non Positive");
}

