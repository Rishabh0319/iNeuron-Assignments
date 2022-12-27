
/* ************ 10. Write a program in C to Find the Frequency of Characters. ************* */

#include<stdio.h>
void main()
{
    char str[50] = "rishabh tripathi";
    int  freq[50] = {0};
    int i=0;

    for(i=0 ; str[i] != '\0' ; i++)
    {
        freq[str[i] - 'a']++;
    }

    printf("Frequency of Each Character is: ...\n");
    for(i=0 ; i < 50 ; i++)
    {
       if(freq[i] != 0)
       {
           printf("%c = %d\n",i+'a',freq[i]);
       }
    }
}

