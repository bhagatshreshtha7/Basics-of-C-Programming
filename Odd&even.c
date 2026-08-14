#include<stdio.h>

int main()
{
	int num;
	
	printf("Enter A Number:");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("%d is a even number",num);
	}
	else
	{
		printf("%d is an odd number",num);
	}
	
	return 0;
}
