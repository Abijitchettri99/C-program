#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any three number a,b,c respectively:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
		printf("a The %d element is greatest element",a);
	else if (c>a)
		printf("b The %d element is greatest element",c);
	else	{
			if (a>c)
				printf("a The %d element is geatest element",a);
			else
				printf("c The %d element is greatest element",c);
		}
}
