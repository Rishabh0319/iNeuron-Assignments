
/* ********** 1. Write a program to find the Nth term of the Fibonnaci series. ********** */


#include<stdio.h>
int findFiboTerm(int);
void main()
{
    int num,a=0,b=1,c=0;
    printf("Enter a number to find N'th term fibonnaci series: ");
    scanf("%d",&num);

    for(int i=2 ; i <= num ; i++)
    {
       c = a+b;
       a = b;
       b = c;
    }
    
    printf("%d fibonnaci term is: %d",num,c);
}




