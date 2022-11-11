
/* *********** 9. Write a program to calculate LCM of two numbers ************ */

#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers to find LCM: ");
    scanf("%d %d",&a,&b);
 
    int l; 
    for(l=(a>b)?a:b ; l <= a*b ; l=l+(a>b?a:b))
    {
        if(l % a == 0 && l % b == 0)
           break;
    }

    printf("LCM of %d and %d is: %d",a,b,l);
}

