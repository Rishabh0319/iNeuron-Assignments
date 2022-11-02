

/* ******************** 2. Write a program to print a given number without its last digit. *********************** */

#include <stdio.h>
void main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    printf("skip last Digit: %d",num/10);
}

