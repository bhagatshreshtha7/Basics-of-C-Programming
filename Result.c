#include<stdio.h>

int main()
{
	float marks;
	
	printf("Enter Marks:");
	scanf("%f",&marks);
	
	if(marks>=35)
	{
		printf("Result: PASS");
	}
	else
	{
		printf("Result: FAIL");
	}
	
	return 0;
}
