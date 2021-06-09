#include <stdio.h>
int main()
{
	int a,i;
	float sum=0.0;
	printf("\nEnter the number to find the sum of series:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
		sum=sum+((float)1/(float)i);
	printf("Sum of the series is %.2f",sum);
}
