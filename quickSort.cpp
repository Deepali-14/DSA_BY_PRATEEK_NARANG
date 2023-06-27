//Code to perform quick sort



#include<iostream>
#include<vector>
using namespace std;



void read(int a[], int n)
{
	cout<<"\n Reading Array : "<<endl;
	for(int i=0; i<n; i++)
		cin>>a[i];
}

void print(int a[], int n)
{
	for(int i=0; i<n; i++)
		cout<<" "<<a[i]<<"\t";
	cout<<endl;
}
int partition(int a[], int s, int e)
{
	int pivot=a[e];
	int i=s-1;
	for(int j=s; j<e; j++)
	{
		if(a[j]<pivot)
		{
			i++;
			swap(a[i], a[j]);
		}
	}
	swap(a[i+1], a[e]);
	return i+1;
}
void quickSort(int a[], int s, int e)
{
	if(s>=e)
	{
		return;
	}
	int p=partition(a,s,e);
	quickSort(a,s,p-1);
	quickSort(a,p+1,e);
}
int main()
{
	int n;
	
	cout<<"Enter n : ";
	cin>>n;
	
	int* a=new int [n];
	
	read(a,n);
	
	cout<<"Before sorting : "<<endl;
	print(a,n);
	
	quickSort(a,0,n-1);
	
	cout<<"After sorting : "<<endl;
	print(a,n);
	
	return 0;
}
