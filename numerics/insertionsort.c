#include<stdio.h>
void insertion_sort(int[],int);
int main()
{
	int arr[100],i,n;
	printf("\n Enter the no of array elements:");
	scanf("%d",&n);
	printf("\n Enter %d no of elements:",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nBefore sorting values are:");
	for(i=1;i<=n;i++)
	{
	printf("%d ",arr[i]);
	}
insertion_sort(arr,n);
	printf("\nAfter sorting values are:");
	for(i=1;i<=n;i++)
	{
		printf("%d ",arr[i]);
	}
	return (0);
}
void insertion_sort(int a[],int n)
{
	int  i,j,temp;
	for(i=2;i<=n;i++)
	{
		temp=a[1];
		j=i-1;
		while(j>0 && temp<a[j])
	{
		a[j+1]=a[j];
		j--;
	}
		a[j+1]=temp;
	}
}
