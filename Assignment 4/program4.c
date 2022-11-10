
/* ******* 4. Write a program to print the first 10 odd natural numbers ******** */


#include<stdio.h>
void main()
{
    for(int i=1 ; i <= 10 ; i++)
    {
       if(i % 2 != 0) 
        printf("%d\n",i);
    }
}
