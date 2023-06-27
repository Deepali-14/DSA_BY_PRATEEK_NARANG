// Program of bubble sort



#include<iostream>
using namespace std;
#define max 20

void read(int a[], int n)
{
	cout<<"\n Reading Array ->"<<endl;
	for(int i=0; i<n; i++)
		cin>>a[i];
}

void print(int a[], int n)
{
	cout<<"\n Printing Array ->"<<endl;
	for(int i=0; i<n; i++)
		cout<<" "<<a[i]<<"\t";
	cout<<endl;
}

void bubble_sort(int a[],int n)
{
	for(int i=0; i<n-1; i++)
		for(int j=0; j<n-i-1; j++)
			if(a[j]>a[j+1])
				swap(a[j],a[j+1]);
}

int main()
{
	int n,a[max];
	
	cout<<"Enter n : ";
	cin>>n;
	
	read(a,n);
	
	cout<<"\n Before sorting : "<<endl;
	print(a,n);
	
	bubble_sort(a,n);
	
	cout<<"\n After sorting in ascending order : "<<endl;
	print(a,n);
	
	return 0;
}
