
/* *************** 8. Write a function to count words in a given string **************** */

#include<stdio.h>
#include<string.h>
void countWords(char[]);

void main()
{
   char str[100];
   printf("Enter a String: ");
   fgets(str,100,stdin);
   str[strlen(str)-1] = '\0';
   countWords(str);
}

void countWords(char str[])
{
   int i,count=0; 
   for(i=0; str[i] != '\0' ; i++)
   {
      if(str[i] == ' ')
      {
        count++;
      }
   }

   printf("Number of words is %d\n",count+1);
}
