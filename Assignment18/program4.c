
/* ****************** 4. Write a function to transform string into uppercase ****************** */

#include<stdio.h> 
#include<string.h>
void toUpperCase(char[]);

void main()
{
   char str[100];
   printf("Enter a String: ");
   fgets(str,100,stdin);
   str[strlen(str)-1] = '\0';
  
   toUpperCase(str);   // Function call

   printf("%s ",str);
}

void toUpperCase(char str[])
{
   int i=0; 
   while (str[i] != '\0')
   {
      if(str[i] >= 'a' && str[i] <= 'z')
      {
        str[i] -= 32;
      }
      i++;
   }  
}