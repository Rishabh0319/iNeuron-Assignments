


/* ************** 7. Write a program to check whether the given number is even or odd using a bitwise operator. *************** */


#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number to check even or odd: ");   
    scanf("%d",&num);

    (num & 1) ? printf("%d is Odd",num) : printf("%d is Even",num);
}
