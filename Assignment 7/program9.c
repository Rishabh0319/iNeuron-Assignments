

/* ************** 9. Write a program to check whether a given number is an Armstrong number or not ***************** */


#include<stdio.h>
int main()
{
    int num,originalNum, remainder, result = 0;

    printf("Enter a three-digit integer: ");
    scanf("%d",&num);
    originalNum = num;

    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += remainder*remainder*remainder;
        originalNum /= 10;
    }
    if(result == num)
    {
       printf("%d is an Armstrong number.", num);
    }
    else
    {
        printf("%d is not an Armstrong number.",num);
    }
    
}
