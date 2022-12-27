
/* ******************* 2. Write a function to swap strings of two char arrays of calling functions. ******************* */


#include<stdio.h>
#include<string.h>
void main()
{
    char a1[10],a2[10];
    int l1=0,l2=0;

    printf("Enter name two Times: ");
    gets(a1);
    fgets(a2,10,stdin);

    a2[strlen(a2)-1] = '\0';
  
    for(int i=0 ; a1[i] != '\0'; i++)
    {
       l1++;
    }

    for(int i=0 ; a2[i] != '\0'; i++)
    {
       l2++;
    }

    printf("l1= %d\nl2= %d",l1,l2);
}
