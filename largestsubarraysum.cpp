// Program to find largest sum from given subarrays using prefix sum to reduce complexity

#include<iostream>

using namespace std;

void largest_subarr_sum(int a[], int n)
{
	int prefix[n], largest_sum = 0;
	
	prefix[0] = a[0];
	
	for(int i=1; i<n ; i++)
	{
		prefix[i] = prefix[i-1] + a[i];
	}
	
	cout<<"\n Array -> "<<endl;
	for(int i=0; i<n ; i++)
		cout<<" "<<prefix[i]<<"\t";
	cout<<endl;
	
	for(int i=0; i<n; i++)
	{
		for(int j=i; j<n; j++)
		{
			int subarr_sum = i>0 ? prefix[j] - prefix[i-1] : prefix[j];
			
			cout<<subarr_sum<<endl;
			
			largest_sum = max(largest_sum, subarr_sum);
		}
	}
	
	cout<<"\n Largest subarray sum = "<<largest_sum<<endl;
}

int main()
{ 
	int a[] = {-1,2,3,4};
	
	int n = sizeof(a) / sizeof(int);
	
	cout<<"\n Array -> "<<endl;
	for(int i=0; i<n ; i++)
		cout<<" "<<a[i]<<"\t";
	cout<<endl;
	
	largest_subarr_sum(a,n);
	
	return 0;
}
