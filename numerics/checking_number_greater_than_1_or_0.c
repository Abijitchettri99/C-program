#include <stdio.h>
int main()
{
	int a;
	printf("Enter any number +ve, -ve or 0:");
	scanf("%d",&a);
	if (a>=1)
		printf("The number is +ve.");
	else if (a<0)
		printf("The number is -ve.");
	else
		printf("The number is 0.");
	return 0;
}
