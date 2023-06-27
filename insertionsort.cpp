// Program of insertion sort

#include<iostream>

#include<vector>

#include<bits/stdc++.h>

using namespace std;

void read(vector<int> &a)
{
	int n,m;
	
	cout<<"\n Enter n:";
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		cin>>m;
		a.push_back(m);
	}
}

void print(vector<int> &a)
{
	for(int i=0; i<a.size(); i++)
		cout<<" "<<a[i]<<"\t";
	cout<<endl;
}

void insertion_sort(vector<int> &a)
{
	int prev,current;
	for(int i=1; i<=a.size()-1; i++)
	{
		current=a[i];
		prev=i-1;
		while(prev>=0 && current<a[prev])
		{
			a[prev+1]=a[prev];
			prev=prev-1;
		}
		a[prev+1]=current;
	}
}

int main()
{
	vector<int> a;
	
	cout<<"\n Array : ";
	read(a);
	
	cout<<"\n Array before sorting : ";
	print(a);
	
	insertion_sort(a);
	
	cout<<"\n Array after sorting in ascending order : ";
	print(a);
	
	return 0;
}
