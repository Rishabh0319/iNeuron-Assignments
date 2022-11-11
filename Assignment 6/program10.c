
/* ********** 10. Write a program to reverse a given number *********** */

#include<stdio.h>
void main()
{
    int num,remender,reverse=0,clone;
    printf("Enter a number: ");
    scanf("%d",&num);
    clone=num;
    while(num != 0)
    {
       remender = num%10;
       reverse = reverse*10+remender;
       num = num/10;
    }

    printf("Reverse of %d is: %d",clone,reverse);
}

