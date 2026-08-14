#include<stdio.h>

int main()
{
	//Declare variables
	int a,b;
	int sum,sub,mul,div,mod;
	printf("Enter the value of a");
	scanf("%d",&a);
	
	printf("Enter the value of b");
	scanf("%d",&b);
	
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	mod=a%b;
	
	printf("\n Addition=%d",sum);
	printf("\n Substraction=%d",sub);
	printf("\n Multiplication=%d",mul);
	printf("\n Divition=%d",div);
	printf("\n Modulus=%d",mod);
	
	return 0;
}
