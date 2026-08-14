#include<stdio.h>

int main()
{
	int rollno;
	float marks;
	char grade;
	
	printf("Enter roll no.");
	scanf("%d",&rollno);
	printf("Enter marks");
	scanf("%f",&marks);
	printf("Enter grade");
	scanf("%c",&grade);
	
	printf("\n...Student Details...");
	printf("Roll Number: %d",rollno);
	printf("Marks: %.2f",marks);
	printf("Grade: %c",grade);
	
	return 0;
}
