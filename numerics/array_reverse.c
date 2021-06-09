#include <stdio.h>
int main()
{
	int z;
	printf("Enter any  number:");
	scanf("%d",&z);
	int i,a[z];
	printf("\nEnter the %d number of elemets:",z);
	for(i=0;i<z;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("After reversing the number are:");
	for(i=z-1;i>=0;i--)
	{
		printf(" %d ",a[i]);
	}
	return 0;
}
