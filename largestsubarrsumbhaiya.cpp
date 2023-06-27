// Program to calculate largest sum from subarrays

#include<iostream>

using namespace std;

void largest_subarr_sum(int a[], int n)
{
	int largest_sum=0, subarr_sum;
	
	cout<<"\n SubArray -> "<<endl;
	for(int i=0; i<n; i++)
	{
		for(int j=i; j<n; j++)
		{
			subarr_sum=0;
			
			for(int k=i; k<=j; k++)
			{
				cout<<" "<<a[k]<<"\t";
				subarr_sum=subarr_sum+a[k];
			}
			
			cout<<endl;
			largest_sum=max(largest_sum, subarr_sum);
		}
	}
	
	cout<<"\n Largest subarray sum = "<<largest_sum<<endl;
}

int main()
{
	int a[] = {-2,3,4,-1,5,-12,6,1,3};
	
	int n=sizeof(a)/sizeof(int);
	
	cout<<"\n Array -> "<<endl;
	for(int i=0; i<n ; i++)
		cout<<" "<<a[i]<<"\t";
	cout<<endl;
	
	largest_subarr_sum(a,n);
	
	return 0;
}
