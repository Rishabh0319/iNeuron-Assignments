
/* ********** 7. Write a program to count digits in a given number ********** */

#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    int count=0,temp=num;
    while(num != 0)
    {
       count++; 
       num = num/10;
    } 

    printf("digits in %d is: %d",temp,count);
}

