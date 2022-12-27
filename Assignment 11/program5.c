/* ********** 5. Write a function to print first N prime numbers (TSRN) *********** */

#include <stdio.h>
void printPrime(int n)
{
    int num, count, i;
    printf("The prime numbers in between the range 1 to %d:", n);
    for (num = 1; num <= n; num++)
    {
        count = 0;
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0 && num != 1)
            printf("%d ", num);
    }
}

void main()
{
    int n;
    printf("Enter a number to print first N Prime number: ");
    scanf("%d", &n);
    printPrime(n);
}