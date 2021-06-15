/*
#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[] = {3,2,4,2,5};                   //{15,20,50,1,100}; //{3,2,4,2,5} { 5,4,6,2,7}
    int n = sizeof(arr)/sizeof(arr[0]);
    int min=INT_MAX;
    int i,j,k,d,q;
    int m[5][5]={0};
    for (d=1;d<=n-1;d++)
    {
        for(i=1;i<n-d;i++)
        {
            j=i+d;
            for(k=i;k<=j-1;k++)
            {
                q=m[i][k]+m[k+1][j]+arr[i-1]*arr[k]*arr[j];
                if(q < min)
                {
                    min=q;
                }
            }       
            m[i][j]=min;
        }
    }
    printf("Minimum number of multiplications is %d ",(m[i][n-1]));
    return 0;
}
*/



#include<stdio.h>
#include<limits.h>

int MCM (int p[] , int n)
{
	int m[6] [6]={0};
	int i, j, k, d, q;
	
	//for (i=1; i<n; i++)
	//	m[i] [i] =0;
		
	for (d=2; d<n; d++)
	{
		for (i=1; i<n-d+1; i++)
		{
			j = i+d-1;
			m[i] [j] = INT_MAX;
			
			for(k=i; k<=j-1; k++)
			{
				q = m[i] [k] + m[k+1] [j] + p[i-1]*p[k]*p[j] ;
				if (q<m[i][j])
				{
					m[i][j] = q;
				}
			}
		}
	}
	
	return m[1] [n-1] ;
	
}

int main ()
{
	int arr[]={15,20,50,1,100};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	printf("Minimum number of multiplications is %d", MCM(arr, size));
	return 0;
}




























