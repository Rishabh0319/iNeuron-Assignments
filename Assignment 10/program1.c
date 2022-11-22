

/* ******************** 1. Write a function to calculate the area of a circle. (TSRS) ******************** */


#include<stdio.h>
float areaOfCircle(float);
void main()
{
    float radius;
    printf("Enter radius of circle: ");
    scanf("%f",&radius);
    float result = areaOfCircle(radius);
    printf("area of Circle is: %.2f",result);
}

float areaOfCircle(float radius)
{
    float area;
    area = 3.14159 * radius * radius;
    return area;
}