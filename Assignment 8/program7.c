

// **********
// ****  ****
// ***    ***
// **      **
// *        *

#include <stdio.h>
void main()
{
    int i, j, no_rows=5;
    int spaces = 0;
    for (i = no_rows; i > 0; i--)
    {

        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        for (j = 0; j < spaces; j++)
        {
            printf(" ");
        }

        for (j = 0; j < i; j++)
        {
            printf("*");
        }

        printf("\n");
        spaces += 2;
    }
}
