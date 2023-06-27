// Program of bubble sort using vector
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define max 20

void read(vector<int> &a)
{
	int n,i;
	cout<<"Enter n : ";
	cin>>n;
	cout<<"\n Reading Array ->"<<endl;
	while(n!=0)
	{
		cin>>i;
		a.push_back(i);
		n--;
	}
}

void print(vector<int> &a)
{
	cout<<"\n Printing Array ->"<<endl;
	for(int i=0; i<a.size(); i++)
		cout<<" "<<a.at(i)<<"\t";
	cout<<endl;
}

void bubble_sort(vector<int> &a)
{
	for(int i=0; i<a.size()-1; i++)
		for(int j=0; j<a.size()-i-1; j++)
			if(a[j]>a[j+1])
				swap(a[j],a[j+1]);
}

int main()
{
	vector<int> a;
	
	read(a);
	
	cout<<"\n Before sorting : "<<endl;
	print(a);
	
	bubble_sort(a);
	
	cout<<"\n After sorting in ascending order : "<<endl;
	print(a);
	
	return 0;
}
