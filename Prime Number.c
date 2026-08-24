#include<stdio.h>

int main()
{
	int num,i,isPrime=1;
	printf("Enter a positive number");
	scanf("%d",&num);
	
	if(num<2)
	{
		isPrime=0;
	} 
	else
	{
		for(i=2;i<num;i++)
		{
			if(num%i==0)
			{
				isPrime=0;
				break;
			}
		}
	}
	if(isPrime)
	{
		printf("%d is a Prime Number");
	}
	else
	{
		printf("%d is not a prime number");
	}
	return 0;
}
