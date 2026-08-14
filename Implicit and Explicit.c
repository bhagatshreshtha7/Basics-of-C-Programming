#include<stdio.h>

int main()
{
	int a=10,b=3;
	float result1;
	
	result1= a/b;
	printf("Implicit Conversion=%.2f\n",result1);
	
	float result2;
	result2=(float) a/b;
	printf("Explicit Conversion=%.2f\n",result2);
	
	return 0;
}
