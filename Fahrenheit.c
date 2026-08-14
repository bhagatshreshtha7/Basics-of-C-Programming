#include<stdio.h>

int main()
{
	//Declare variables
	float Fahrenheit,celcius;
	
	printf("Enter the value of celcius");
	scanf("%f",&celcius);
	
	Fahrenheit=(celcius*9/5)+32;
	
	printf("Fahrenheit=%.2f",Fahrenheit);
	
	return 0;
}
