

/* ********************* 4. Write a program to check whether a given number is an even number or an odd number without using % operator. *********************** */


#include<stdio.h>

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num & 1)
    {
        printf("number is odd");
    }
    else
    {
        printf("number is even");
    }
    
}

