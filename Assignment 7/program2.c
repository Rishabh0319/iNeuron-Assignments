

/* ********* 2. Write a program to print first N terms of Fibonacci series ********** */


#include<stdio.h>
void main()
{
    int num,a=1,b=1,c;
    printf("enter N'th term to print Fibonacci series: ");
    scanf("%d",&num);

    for(int i=1 ; i <= num ; i++)
    {
       c = a + b;  
       printf("%d ", a); 
       a = b;
       b = c;
    }
}


