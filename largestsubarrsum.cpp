//Program to print largest sum from subarrays (Deepali)

#include <iostream>

using namespace std;

void subarr(int a[], int n)
{
    int sum=0,sum1=0;
    
    cout<<"\n SubArray -> "<<endl;
    
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            sum=0;
            
            for(int k=i; k<=j; k++)
            {
                cout<<" "<<a[k]<<"\t";
                sum=sum+a[k];
            }
            
            cout<<"\n Sum = "<<sum<<endl;
            if(sum>sum1)
            	sum1=sum;
            	
        }
        
        cout<<endl;
    }
    
    cout<<"\n Largest subarray sum = "<<sum1<<endl;
}

int main() 
{
	int a[] = {-2,3,4,-1,5,-12,6,1,3};

    int n=sizeof(a)/sizeof(int);
    
    cout<<"\n Array -> "<<endl;
	for(int i=0; i<n ; i++)
		cout<<" "<<a[i]<<"\t";
	cout<<endl;

    subarr(a,n);

	return 0;
}
