
/* *********** 3. Write a function to check whether a given number is Prime or not. (TSRS) ************* */

#include<stdio.h> 
int isPrime(int n)
{
   int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i!=0)
			continue;
		else
			return 1;
	}
	return 0;
}

void main()
{
    int signal,num;
    printf("Enter a number: ");
    scanf("%d",&num);

    signal = isPrime(num);

    if(signal == 0)
    {
        printf("%d is prime number", num);
    }
    else
    {
        printf("%d is not prime number", num);
    } 
}


