
/* **************** 1. Write a program to print unit digit of a given number **************** */

#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number to print unit digit: ");
    scanf("%d",&num);

    printf("unit digit is: %d", num%10);

}