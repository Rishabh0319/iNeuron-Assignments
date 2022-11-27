

/* *********** 1: Write a program to draw the following patterns: ************** */ 


// *
// * *
// * * *
// * * * *
// * * * * *


#include<stdio.h>
void main()
{
   int i,j; 
   for(i=1 ; i <= 5 ; i++)     // printing number of rows
   {
      for(int j=1 ; j <= i ; j++)    // printing number of columns
      {
        printf("* ");
      }
      printf("\n");
   }
}





