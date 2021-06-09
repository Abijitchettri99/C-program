#include <stdio.h>
void bubble_sort (int[],int);
int main()
{
	int arr[100],a,i;
	printf("\nEnter the no of array elements:");
	scanf("%d",&a);
	printf("\nEnter %d no of elements:",a);
	for(i=0;i<a;i++)
	{
		scanf(" %d " , &arr[i]);
	}
	printf("Befor sorting values are:");
	for(i=0;i<a;i++)
	{
		printf(" %d ", arr[i]);
	}
bubble_sort (arr,a);
	printf("\nAfter sorting values are:");
	for(i=0;i<a;i++)
	{
	printf(" %d ", arr[i]);
	}
return(0);
}
void bubble_sort (int a[],int n)
	{
		int i,j,temp;
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-1-i;j++)
			{
				if(a[i]>a[j+1])
				{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				}
			}
		}
	}
