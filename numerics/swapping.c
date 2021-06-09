#include <stdio.h>
int main()
{
	int a,b;
	printf("\nEnter the value of a,b:");
	scanf("%d%d",&a,&b);
	printf("\nBefore swappig the values area: a%d, b%d", a ,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter swapping the values are: a%d, b%d", a , b);
	return(0);
}
