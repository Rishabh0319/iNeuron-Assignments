

/* ******** 5. Write a program to calculate sum of cubes of first N natural numbers ********* */


#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    long int sum=0;
    for(int i=1 ; i <= num ; i++)
    {
       sum += (i*i*i);
    }

    printf("sum of cube of %d natural number is: %d",num,sum);
}
