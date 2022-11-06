

/* ****************** 5. Write a program to check whether a given number is a three digit number or not. ******************** */


#include<stdio.h>
void main()
{
    printf("Enter a number: ");
    int num;
    scanf("%d",&num);

    int count = 0;

    while(num != 0)
    {
       count++;
       num = num / 10;
    }
    
    if(count == 3)
       printf("number is three digit number");
    else 
       printf("number is not three digit number");   
} 

