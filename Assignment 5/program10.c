

/* ******* 10. Write a program to print a table of N. ******* */


#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number to print table: ");
    scanf("%d",&n);

    for(int i=1 ; i <= 10 ; i++)
    {
       printf("%d x %d = %d\n",n,i,(n*i));
    }
}
