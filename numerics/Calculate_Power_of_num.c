#include <stdio.h>
int main()
{
	int base,exp,result=1,i;
	printf("\nEnter base and exponential number:");
	scanf("%d%d",&base,&exp);
	for(i=1;i<=exp;i++)
		if (exp!=0)
			{
			result=result*base;
			}
		else
			return 1;
	printf("%d^%d=%d",base,exp,result);
	return 0;
}
