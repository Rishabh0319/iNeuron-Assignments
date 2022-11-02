

/* ******************* 12. Write a program to take a three digit number from the user and rotate its digits by one position towards the right. ******************* */


#include<stdio.h>
void main()
{
    int num,count = 0, remender = 0, result = 0;
    printf("Enter a 3 digit number: ");
    scanf("%d",&num);   

    while(num != 0)
    {
       count = count + 1;
       remender = num % 10;
       result = result * 10 + remender;
       num = num / 10;
    }
    
    printf("Rotate towards Right by one digit: %d",result);
}


