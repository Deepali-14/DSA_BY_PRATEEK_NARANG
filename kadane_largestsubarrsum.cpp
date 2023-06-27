// Program to find largest sum from given subarrays using kadane's algorithm to reduce complexity

#include<iostream>

using namespace std;

void largest_subarr_sum(int a[], int n)
{
	int cs=0, largest=0;
	
	for( int i=0; i<n; i++)
	{
		cs = cs + a[i];
		
		if(cs<0)
			cs=0;
		
		largest = max(largest,cs);
	}
	
	cout<<"\n Largest subarray sum = "<<largest<<endl;
}

int main()
{ 
	int a[] = {-2,3,4,-1,5,-12,6,1,3};
	
	int n = sizeof(a) / sizeof(int);
	
	cout<<"\n Array -> "<<endl;
	for(int i=0; i<n ; i++)
		cout<<" "<<a[i]<<"\t";
	cout<<endl;
	
	largest_subarr_sum(a,n);
	
	return 0;
}
