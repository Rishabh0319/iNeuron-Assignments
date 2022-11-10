

/* ******* 6. Write a program to calculate factorial of a number ******* */


#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    long int factor = 1;
    for(int i = num ; i >= 1 ; i--)
    {
       factor *= i;
    }

    printf("Factorial of %d is: %d",num,factor);
}

