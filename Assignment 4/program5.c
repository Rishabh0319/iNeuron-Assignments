

/* ******* 5. Write a program to print the first 10 odd natural numbers in reverse order. ******** */


#include<stdio.h>
void main()
{
    for(int i=10 ; i >= 1 ; i--)
    {
       if(i % 2 != 0)
         printf("%d\n",i);
    } 
}

