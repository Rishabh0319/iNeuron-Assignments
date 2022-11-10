

/* ********* 7. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots ********** */


#include<stdio.h>
void main()
{
    double a,b,c, descriminant;

    printf("Enter Cofficiants a, b, c: ");
    scanf("%1f %1f %1f",&a,&b,&c);    

    descriminant = b * b - 4 * a * c;

    if(descriminant > 0)
    {
       printf("Real and Distinct\n");
    }
    else if(descriminant == 0)
    {
        printf("Real and Different\n");
    }
    else
    {
        printf("roots are not real");
    }
}


