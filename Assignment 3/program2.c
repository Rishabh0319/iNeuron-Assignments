
/* **************** 2. Write a program to check whether a given number is divisible by 5 or not ***************** */

#include<stdio.h>

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num % 5 == 0)
    {
       printf("This number is Divisible by five");
    }
    else
    {
        printf("This number is NOT Divisible by five");
    }
    
}