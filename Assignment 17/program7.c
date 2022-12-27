
/* 7. Write a program in C to count the total number of alphabets, digits and special characters in a string. */ 

#include<stdio.h>
#include<string.h>
void main()
{
    int nDigit=0,nAlpha=0,nSchar=0;
    char str[100];
    printf("Enter a String: ");
    fgets(str,100,stdin);
    str[strlen(str)-1] = '\0';

    for(int i=0 ; str[i] != '\0' ; i++)
    {
       if((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
       {
        nAlpha++;
       }
       if(str[i] >= 48 && str[i] <= 57)
       {
         nDigit++;
       }
       if((str[i] >= 32 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64) || (str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 && str[i] <= 126))
       {
          nSchar++;
       }
    }

    printf("number of Alphabet = %d\nnumber of Digit = %d\nnumber of Special Character = %d\n",nAlpha,nDigit,nSchar);
}
