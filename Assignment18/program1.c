/* *************** 1. Write a function to calculate length of the string **************** */

#include<stdio.h>
#include<string.h>

int stringLength(char[]);

void main()
{
   char str[1000]; 
   printf("Enter a String: ");
   fgets(str,1000,stdin);
   str[strlen(str)-1] = '\0';

   int length = stringLength(str);
   printf("Length of the String is: %d", length);
}

int stringLength(char str[])
{
   int length=0,i;
   for(i=0 ; str[i] != '\0' ; i++)
   {
      length++;
   }
   return length;
}