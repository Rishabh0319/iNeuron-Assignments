

/* ******** Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character. ******** */


#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    if(ch >= 65 && ch <= 90)
    {
        printf("character in uppercase");
    }
    else if(ch >= 98 && ch <= 122)
    {
        printf("character in lowercase");
    }
    else if(ch >= 48 && ch <= 57)
    {
        printf("this is a digit");
    }
    else
    {
        printf("this is a special character");
    }
    
    
}