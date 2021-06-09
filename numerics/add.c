#include<stdio.h>
int main()
{
	int x=3,y=2;
	x=y++ + x++;
	y=++y + ++x;
	printf("%d%d",x,y);
	return(0);
}
