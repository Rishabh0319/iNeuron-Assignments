
/* ****************** 5. Write a function to transform a string into lowercase ********************* */

#include<stdio.h>
#include<string.h>

void toLowerCase(char[]);

void main()
{
   char str[100];
   printf("Enter a String: ");   
   gets(str);

   toLowerCase(str);    // Function call
   printf("%s ",str);
}

void toLowerCase(char str[])
{
   int i=0;
   while (str[i] != '\0')
   {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        i++;
   }
   
}
