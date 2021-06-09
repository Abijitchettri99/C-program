#include <stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter a number to check it is a perfect square or not:");
	scanf("%d",&n);
	for (i=1;i<n;i++)
		{
		if (n%i==0)
			sum+=i;
		}
	if (sum==n)
		printf("\nThe number is a perfect square number %d",n);
	else
		printf("\nThe number is not a perfect square number %d",n);
}
