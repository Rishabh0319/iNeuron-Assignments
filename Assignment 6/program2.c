
/* ******** 2. Write a program to calculate sum of first N even natural numbers ******** */


#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    int sum=0;
    for(int i=1;i<=num;i++)
    {
       if(i % 2 == 0)
       {
          sum += i;
       }
    } 

    printf("sum of %d even natural number is %d",num,sum);
}

