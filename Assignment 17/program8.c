
/* ******** 8. Write a program in C to copy one string to another string. ******** */


#include<stdio.h>
#include<string.h>
void main()
{
    char originaStr[100],CopyedStr[100];
    printf("Enter a String: ");
    fgets(originaStr,100,stdin);
    originaStr[strlen(originaStr)-1] = '\0';

    printf("Original string: ");
    printf("%s", originaStr);

    for(int i=0 ; originaStr[i] != '\0' ; i++)
    {
       CopyedStr[i] = originaStr[i];
    } 

    printf("\nCopyed string: ");
    printf("%s", CopyedStr);
}