#include<stdio.h>
int main()
{
	int z,i,largest,smallest;

	printf("Enter any number:");
	scanf("%d",&z);
	int a[z];
	int len=sizeof(a)/sizeof(a[0]);
	printf("Enter the %d number of element:",z);
	for(i=0;i<z;i++)
	{
		scanf("%d",&a[i]);
	}
	largest=smallest=a[0];
	for(i=1;i<len;i++)
	{
		if(a[i]>largest)
			largest=a[i];
		if(a[i]<smallest)
			smallest=a[i];
	}
	printf("Largest=%d\nSmallest=%d",largest,smallest);
	return 0;
}
