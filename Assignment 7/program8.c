

/* ************ 8. Write a program to find next Prime number of a given number ************** */


#include<stdio.h>
void main()
{
    int num,i,j,count=0;
    printf("enter a number: ");
    scanf("%d",&num);

    for(i=num ; i > 0 ; i++)
    {
       count = 0; 
       for(j=1 ; j <= i ; j++)
       {
          if(i % j == 0)
             count++;
       }
       if(count == 2)
       {
           printf("%d",i); 
           break;
       }
    }
}

