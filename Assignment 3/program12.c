

/* ************* 12. Write a program to check whether a given alphabet is in uppercase or lowercase ************* */


#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a Alphabet: ");
    scanf("%c",&ch);

    if(ch >= 'a' && ch <= 'z')
    {
        printf("alphabet in lowercase"); 
    }
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("alphabet in uppercase");
    }
}


