#include <stdio.h>
int main()
{
	int a,b,z,lcm,gcd;
	printf("\nEnter any two number to check GCD and LCM of the given number:");
	scanf("%d%d",&a,&b);
	if (a>b)
		z=a;
	else
		z=b;
	for (gcd=z;gcd>=1;gcd--)
	{
		if (a%gcd==0 && b%gcd==0)
			break;
	}
	printf("\nThe GCD of %d %d is: %d",a,b,gcd);
	lcm=(a*b)/gcd;
	printf("\nThe LCM of %d %d is: %d\n",a,b,lcm);
	return 0;
}
