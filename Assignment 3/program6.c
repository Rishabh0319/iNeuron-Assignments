
/* ***************** 6. Write a program to print greater between two numbers. Print one number if both are the same. ****************** */


#include<stdio.h>

void main()
{
    int num1,num2;
    printf("Enter two numbers (seprate with commas[,]): ");
    scanf("%d,%d",&num1,&num2);

    if(num1 == num2)
    {
        printf("1");
    }
    else if(num1 > num2)
    {
        printf("%d is greater",num1);
    }
    else
    {
        printf("%d is greater",num2);
    }
    
    
}
