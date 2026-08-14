#include<stdio.h>

int main()
{
	//Declare variables
	float SI,principle,rate,time;
	
	printf("Enter the value of principle");
	scanf("%f",&principle);
	printf("Enter the value of rate");
	scanf("%f",&rate);
	printf("Enter the value of time");
	scanf("%f",&time);
	
	SI=(principle*rate*time)/100;
	
	printf("Simple Interest=%.2f",SI);
	
	return 0;
}
