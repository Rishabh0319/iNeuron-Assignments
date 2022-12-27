
/* ************** 2. Write a function to calculate HCF of two numbers. (TSRS) **************** */

#include<stdio.h>

int HCF(int a, int b)
{
    int result = ((a < b) ? a : b); 
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result; 
}

void main()
{ 
   printf("HCF is %d",HCF(98,56));   
} 


