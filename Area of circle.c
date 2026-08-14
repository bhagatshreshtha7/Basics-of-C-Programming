#include<stdio.h>
#define PI 3.14159
int main()
{
	//Declare variables
	float radius,area;
	
	printf("Enter the value of radius");
	scanf("%f",&radius);

	area=PI*radius*radius;
	
	printf("Area=%.2f",area);
	
	return 0;
}
