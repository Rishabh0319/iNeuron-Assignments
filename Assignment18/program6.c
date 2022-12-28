

/* ***************** 6. Write a function to check whether a given string is an alphanumeric string or not.
(Alphanumeric string must contain at least one alphabet and one digit) ****************** */

#include <stdio.h>
int alphanumericStr(char[]);

void main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int desigen = alphanumericStr(str);

    if (desigen == 1)
    {
        printf("String is Alphanumeric String");
    }
    else
    {
        printf("String is not Alphanumeric String");
    }
}

int alphanumericStr(char str[])
{
    int i = 0, D=0, A=0;
    while (str[i] != '\0')
    {
        if (((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
        {
            A=1;
        }
        else if((str[i] >= '0' && str[i] <= '9'))
        {
            D=1;
        }
        i++;
    }

    if (A == 1 && D == 1)
        return 1;
    else
        return 0;
}
