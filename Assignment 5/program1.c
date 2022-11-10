

/* ******** 1. Write a program to print iNeuron N times on the screen ********* */

#include<stdio.h>

void main()
{
    int n;
    printf("Enter a number to print iNeuron: ");
    scanf("%d",&n);
    for(int i=1 ; i <= n ; i++)
    {
        printf("%d => iNeuron\n",i);
    }
}

