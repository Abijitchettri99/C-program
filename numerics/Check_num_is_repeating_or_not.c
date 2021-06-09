#include<stdio.h>
int main()
{
	int arr[10]={0};
	int a;
	printf("\nEnter the numbr:");
	scanf("%d",&a);
	int rem;
	while(a>0)
	{
		rem=a%10;
		if(arr[rem]==1)
			break;
		arr[rem]=1;
		a=a/10;
	}
	if(a>0)
		printf("yes");
	else
		printf("No");
	return 0;
}
