// Program to generate pairs from an array

#include <iostream>

using namespace std;

void arrpair(int a[], int n)
{
   	cout<<"\n Pairs ->"<<endl;
   	for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
            cout<<" "<<"("<<a[i]<<","<<a[j]<<")"<<"\t";
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

 	arrpair(a,n);
 	
	return 0;
}
