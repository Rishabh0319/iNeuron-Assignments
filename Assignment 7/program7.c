

/* **************** 7. Write a program to print all Prime numbers between two given numbers **************** */


#include<stdio.h>
void main()
{
    int beg,end,i,j,f;

    printf("Enter two number of range to print prime number: ");
    scanf("%d %d",&beg,&end);

    printf("\nprime numbers are:\n");

    for(i=beg ; i <= end ; i++)
    {
       if(i == 1 || i == 0)
       {
          continue;
       }
       f = 1;
       for(j = 2 ; j <= i/2; ++j)
       {
          if(i % j == 0)
          {
             f = 0;
             break;
          }
       }
       if(f == 1)
       {
          printf("%d ", i);
       }
    }
}

