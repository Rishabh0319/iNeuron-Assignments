

/* ******** 11. Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed. ******** */


#include<stdio.h>

void main()
{
    float subjet1,subjet2,subjet3,subjet4,subjet5;
    printf("Enter 5 subjects marks: ");
    scanf("%f %f %f %f %f",&subjet1,&subjet2,&subjet3,&subjet4,&subjet5);

    // persentage (%)

    float total_marks = (subjet1+subjet2+subjet3+subjet4+subjet5);
    float percentage = (total_marks/500)*100;

    if(percentage > 33)
    {
       printf("Student is Pass: %4.2f%%",percentage);
    }
    else
    {
        printf("Student is Fail: %4.2f%%",percentage);
    }
    
}

