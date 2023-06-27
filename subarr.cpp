//Program to print subarrays

#include <iostream>

using namespace std;

void subarr(int a[], int n)
{
	cout<<"\n Subarray ->"<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            for(int k=i; k<=j; k++)
                cout<<" "<<a[k]<<"\t";
            cout<<endl;
        }
        cout<<endl;
    }
}

int main() 
{
	int a[]={1,2,3,4,5};

   	int n=sizeof(a)/sizeof(int);
   	
   	cout<<"\n Array -> "<<endl;
	for(int i=0; i<n ; i++)
		cout<<" "<<a[i]<<"\t";
	cout<<endl;

    subarr(a,n);

	return 0;
}
