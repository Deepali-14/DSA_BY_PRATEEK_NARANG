// Program of bubble sort recursive method two, when only both loops are recursive




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
bool compare(int a, int b)
{
	return a>b;
}
void recBub2(int a[], int n, int j)
{
	if(n==1 || n==0)
	{
		return;
	}
	if(j==n-1)
	{
		recBub2(a, n-1, 0);
		return;
	}
	if(a[j]>a[j+1])
	{
		swap(a[j], a[j+1]);
	}
	recBub2(a, n, j+1);
}

int main()
{
	int n,a[max];
	
	cout<<"Enter n : ";
	cin>>n;
	
	read(a,n);
	
	cout<<"\n Before sorting : "<<endl;
	print(a,n);
	
	recBub2(a,n,0);
	
	cout<<"\n After sorting in ascending order : "<<endl;
	print(a,n);
	
	return 0;
}
