
/* **************** 1. Write a program to calculate the length of the string. (without using builtin method) ***************** */

#include<stdio.h>
#include<string.h>
void main()
{
    char name[100];
    printf("Enter full name: ");
    fgets(name,100,stdin);
    name[strlen(name)-1] = '\0';

    int i,count=0;
    for(i=0; name[i] != '\0' ; i++)
    {
       count++;
    }
    printf("length of a string is %d",count);
}

