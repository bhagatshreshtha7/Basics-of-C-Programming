#include<stdio.h>

int main()
{
	//Declare variables
	int a,b;
	
	printf("Enter the value of a");
	scanf("%d",&a);
	
	printf("Enter the value of b");
	scanf("%d",&b);
	
	printf("\n Addition=%d",a+b);
	printf("\n Substraction=%d",a-b);
	printf("\n Multiplication=%d",a*b);
	printf("\n Divition=%d",a/b);
	printf("\n Modulus=%d",a%b);
	
	return 0;
}
