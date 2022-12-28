
/**************** 2. Write a function to reverse a string. *******************/

#include<stdio.h>
#include<string.h>

int stringLength(char[]);
void reverseString(char*);

void main()
{
   char str[1000]; 
   printf("Enter a String: ");
   fgets(str,100,stdin);
   str[strlen(str)-1] = '\0';

   reverseString(str);
   printf("%s ",str);
}


void reverseString(char *str)
{
   int i,j; 
   for(i=0, j = (stringLength(str)-1) ; i < j ; i++,j--)
   {
      char temp = str[i];
      str[i] = str[j];
      str[j] = temp;
   }
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
