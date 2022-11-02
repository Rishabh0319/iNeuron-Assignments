

/* ******************** 11. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD. ******************** */

#include<stdio.h>
void main()
{
   printf("Enter amount in (INR): ");
   float rateOfUSD = 76.23;    //82.26850;   current price at 31/10/2022
   float amount;
   scanf("%f",&amount);  
   float dollar = (amount / rateOfUSD);
   printf("USD: %.3f",dollar);
}