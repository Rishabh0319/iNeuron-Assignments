

/* ***** 15. Write a program to check whether a given number is positive, negative or zero. ***** */


#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num > 0)
    {
       printf("number is positive");
    }
    else if(num < 0)
    {
       printf("number is negative");  
    }
    else
    {
        printf("number is 0");
    }
    
    
}
