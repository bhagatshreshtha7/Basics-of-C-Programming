#include<stdio.h>

int main()
{
	//Declare variables
	float area,base,hieght;
	
	printf("Enter the value of base");
	scanf("%f",&base);
	printf("Enter the value of hieght");
	scanf("%f",&hieght);
	
	area=(base*hieght)/2;
	
	printf("Area of triangle=%.2f",area);
	
	return 0;
}
