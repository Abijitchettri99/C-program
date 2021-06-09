#include <stdio.h>
int main()
{
	int n,i;
	printf("Enter the number you want multiplication of:");
	scanf("%d",&n);
	printf("The multiplication of %d is given below:\n",n);
	for (i=0;i<=12;i++)
		printf("%d x %d = %d\n",n,i,n*i);
}
