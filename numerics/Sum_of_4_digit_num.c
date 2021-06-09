#include <stdio.h>
int main()
{
	int firstdigit,lastdigit,a;
	printf("Enter any in more than or equal to 4 digit:");
	scanf("%d",&a);
	lastdigit=a%10;
	firstdigit=a;
	if(firstdigit>=10)
		firstdigit=firstdigit/10;
	else
		firstdigit=0;
	printf("The sum of first_digit and last_digit:%d",firstdigit + lastdigit);
	return 0;
}
