

/* ***************** 3. Write a function to compare two strings. ******************* */


#include<stdio.h>
#include<string.h>
int strCompare(char[],char[]);

void main()
{
   char str1[100];
   char str2[100];

   printf("Enter Two String: \n");
   fgets(str1,100,stdin);
   fgets(str2,100,stdin);
   str1[strlen(str1) - 1] = '\0';
   str2[strlen(str2) - 1] = '\0';

   int deside = strCompare(str1,str2);

   if(deside == 0)
   {
      printf("String are Same");
   }
   else
   {
    printf("String are not Same");
   }  
}

int strCompare(char s1[], char s2[])
{
    int flag=0,i=0;

    while(s1[i] != '\0' && s2[i] != '\0')
    {
        if(s1[i] != s2[i])
        {
            flag = 1;
            break;
        }
        i++;
    }

    if(flag == 0)
    {
       return 0;
    }
    else
    {
       return 1;
    }
    
}