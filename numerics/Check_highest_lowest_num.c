#include <stdio.h>
int main()
{
	int a[50],i,n,b,c;
	printf("\nEnter number of elements:");
	scanf("%d",&n);
	printf("\nEnter datas:");



	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	b=c=a[0];
	for(i=1;i<n;++i)
	{
		if(a[i]>b)
			b=a[i];
		if(a[i]<c)
			c=a[i];
	}
	printf("\nHighest elements %d",b);
	printf("\nSmallest elements %d",c);
 return 0;
}
