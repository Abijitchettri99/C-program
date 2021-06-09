#include<stdio.h>
int main()
{
	int l,k;
	printf("\nEnter any integer:");
	scanf("%d",&l);
	k=2;
	while(k<=l/2)
	{
		if(l%k==0)
		break;
		k++;
	}
	if(k>l/2)
	{
		printf("\nthe no is prime");
	}
	else
	{
		printf("\nThe no is not a prime number");
	}
	return(0);
}
