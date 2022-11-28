
/* ********** 7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS) *********** */


#include<stdio.h>

int fact(int n)
{
   int i,f=1;

   for(i=1 ; i <= n ; i++)
   {
      f = f * i;
   }

   return f;
}

int comb(int n, int r)
{
   return fact(n)/(fact(r)*fact(n-r));
}

void main()
{
    printf("combination = %d\n\n",comb(10,2));
}
