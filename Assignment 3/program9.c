

/* ****** 9. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times. ******* */


#include<stdio.h>
void main()
{
   int a,b,c;

   printf("Enter 3 numbers: ");
   scanf("%d %d %d",&a,&b,&c);

   if((a>b) && (a>c))
   {
      printf("%d is greatest\n",a);
   }
   else if((b > a) && (b > c))
   {
      printf("%d is greatest\n",b);
   }
   else if((a==b)||(b==c)||(c==a))
   {
      printf("Greatest number is Repeated\n");
   }     
   else
   {
    printf("%d is greatest\n",c);
   }
   
}