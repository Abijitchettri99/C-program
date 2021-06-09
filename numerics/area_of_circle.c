#include <stdio.h>
int main()
{
	float radius, area,pi;
	printf("Enter the radius to calculate the area of the circle:");
	scanf("%f",&radius);
	pi=3.14;
	area=pi*radius*radius;
	printf("The area of a circle with radius %.2f is:",area);
	return 0;
}
