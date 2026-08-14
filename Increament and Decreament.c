#include<stdio.h>
int main()
{
	int a=50;
	printf("Initial Value:%d\n",a);
	
	a+=10;
	printf("After+=5=%d\n",a);
	
	a-=5;
	printf("After-=3:%d\n",a);
	
	printf("Pre Increament(++a)=%d\n",++a);
	printf("Post decreament(a--)=%d\n",a--);
	
	printf("Final Value=%d\n",a);
	
	return 0;
}
