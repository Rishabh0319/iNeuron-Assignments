
/* ******* 3. Write a program to check whether a given number is there in the Fibonacci series or not. ******* */

#include<stdio.h>

void main()
{
    int num1=0,num2=1,num3;
    int input;
    printf("Enter a number: ");
    scanf("%d",&input);
    int count = 2;
    int flag=0;
    while (count < input)
    {
        num3 = num1 + num2;
        count++;

        if(num3 == input)
        {
            flag=1;
            break;
        }  
        num1 = num2;
        num2 = num3;  
    }
    if(flag)
    {
        printf("number is present in fibonacci series");
    }
    else
    {
        printf("number is not present in fibonacci series");
    }
    
}


// 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765


