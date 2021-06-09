#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	if (age<=20 && age>=13)	{
		printf("You are a teenage");
					}
	else
	{
		if (age<13 )
		printf("you are a baby");
		else if (age>20)
		printf("You are an adult");
		
	}
}
