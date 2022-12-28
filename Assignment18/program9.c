
/* ************* 9. Write a function to reverse a string word wise. (For example if the given string is
“iNeuron Education Services” then the resulting string should be “Services Education iNeuron” ) ************** */

#include<stdio.h>
int stringLength(char[]);
void reverseString(char*);

void main()
{
   char str[300];
   printf("Enter Strings: ");
   fgets(str,300,stdin);
   str[stringLength(str)-1] = '\0';


}

void RSW()
{
    
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
