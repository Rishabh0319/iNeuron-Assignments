
/* **************** 6. Write a program to reverse a string. ****************** */


#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];

    printf("Enter a String: ");
    fgets(str,100,stdin);
    str[strlen(str) - 1] = '\0';
    
    for(int i=0, j=(strlen(str)-1) ; i <= j ; i++,j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("\n%s",str);
}
