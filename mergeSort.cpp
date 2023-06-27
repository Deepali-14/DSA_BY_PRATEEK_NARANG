//Code to perform merge sort



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
void merge(int a[], int s, int e)
{
	vector<int> temp;
	int i=s;
	int m=(s+e)/2;
	int j=m+1;
	while(i<=m && j<=e)
	{
		if(a[i]<a[j])
		{
			temp.push_back(a[i]);
			i++;
		}
		else
		{
			temp.push_back(a[j]);
			j++;
		}
	}
	while(i<=m)
	{
		temp.push_back(a[i++]);
	}
	while(j<=e)
	{
		temp.push_back(a[j++]);
	}
	int k=0;
	for(int i=s; i<=e; i++)
	{
		a[i]=temp[k++];
	}
	return;
}
void mergeSort(int a[], int s, int e)
{
	if(s>=e)
	{
		return;
	}
	int mid=(s+e)/2;
	mergeSort(a, s, mid);
	mergeSort(a, mid+1, e);
	merge(a, s, e);
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
	
	mergeSort(a,0,n-1);
	
	cout<<"After sorting : "<<endl;
	print(a,n);
	
	return 0;
}
