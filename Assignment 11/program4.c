
/* ************* 4. Write a function to find the next prime number of a given number. (TSRS) *************** */


#include<stdio.h>           
                       // 0 = prime     1 = notPrime
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

int nextPrime(int n)
{
    if(n <= 1)
      return 2;

    int prime = n;
    int found = 0;

    while (!found)
    {
        prime++;
        int desigen = isPrime(prime);
        if(desigen == 0)
           return prime;
    }
    
}

void main()
{
   int num; 
   printf("Enter a number to find next Prime: ");
   scanf("%d",&num);
   
   printf("next prime of %d is: %d",num,nextPrime(num));
}

