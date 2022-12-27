
/* ************** 3. Write a program to count vowels in a given string *************** */

#include<string.h>
#include<stdio.h>
void main()
{
   char str[100]; 
   printf("Enter a string to count Vowels in String: ");
   gets(str);

   int i,count_vowels=0;
   for(i=0;str[i] != '\0';i++)
   {
      if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
      {
        count_vowels++;
      }
   }
   printf("numbers of vowels is %d", count_vowels);
}
