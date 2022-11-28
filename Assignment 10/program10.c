

/* ************ 10. Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN) ************* */

#include <stdio.h>

void primeFactor(int num)
{
    int i=2;
    for(i=2 ; i <= num ; i++)
    {
       while(num%i == 0)
       {
          printf("%d ",i);
          num = num / i;
       }
    }
}

void main()
{
   primeFactor(36);
}

