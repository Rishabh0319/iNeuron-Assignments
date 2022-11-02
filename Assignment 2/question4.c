

/* ************************** 4. Write a program to swap values of two int variables without using a third variable. ************************** */


#include<stdio.h>
void main()
{
    int num1,num2;
    printf("Enter two number: ");
    scanf("%d %d",&num1,&num2);
    

    printf("\n\nOriginal one: \n");
    printf("num1: %d\nnum2: %d\n",num1,num2);

    // LOGIC HERE
    num1 = num1+num2;
    num2 = num1-num2; 
    num1 = num1-num2;

    printf("\n\nSwaped one: \n");
    printf("num1: %d\nnum2: %d\n",num1,num2);
}
