#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number:");
	scanf("%d",&a);

	int arr[a],i;
	printf("Enter the %d of element:",a);
	printf("\nBefore reversing:");
	for(i=0;i<a;i++)
	{
		scanf(" %d ",&arr[i]);
	}

	printf("After reversing:");
	for(i=a-1;i>=0;i--)
	{
		printf(" %d ",arr[i]);
	}
	return 0;
}
