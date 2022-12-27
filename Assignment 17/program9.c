
/* *************** 9. Write a C program to sort a string array in ascending order. **************** */

#include<stdio.h>
#include<string.h>
void main()
{
    char str[100],chTemp;
    int i,j,len;

    printf("Enter a string: ");
    fgets(str,100,stdin);
    str[strlen(str) - 1];
    len = strlen(str);

    for(i=1 ; i < len ; i++)
    {
       for(j=0 ; j < len-i ; j++)
       {
          if(str[j] > str[j+1])
          {
            chTemp = str[j];
            str[j] = str[j+1];
            str[j+1] = chTemp;
          }
       }
    }

    printf("%s ",str);
}