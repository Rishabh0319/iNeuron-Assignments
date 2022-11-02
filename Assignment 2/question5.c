

/* ************** 5. Write a program to input a three digit number and display the sum of the digits. **************** */


#include <stdio.h>
void main()
{
    printf("Enter a Number: ");
    int num,sum=0;
    scanf("%d",&num);
    int temp = num;
    while (num != 0)
    {
        sum += num % 10;
        num = num / 10;
    }
    
    printf("Sum of digit of %d is: %d",temp,sum);
}
