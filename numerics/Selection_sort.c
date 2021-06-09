#include <stdio.h>
void selection_sort (int[],int);
int main()
	{
		int arr[100],i,n;
		printf("\nEnter the no of array elements:");
		scanf("%d",&n);
		printf("\nEnter the %d no of elements:",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		printf("\nBefore sorting values are:");
		for(i=0;i<n;i++)
		{
			printf(" %d",arr[i]);
		}
		selection_sort(arr,n);
		printf("\nAfter sorting values:");
		for(i=0;i<n;i++)
		{
			printf(" %d",arr[i]);
		}
		return 0;
	}
void selection_sort (int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
				{
					if(a[i]>a[j])
						{
							temp=a[i];
							a[i]=a[j];
							a[j]=temp;
						}
				}
		}

}
