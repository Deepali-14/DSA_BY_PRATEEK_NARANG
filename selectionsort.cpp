// Program of selection sort

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

void print(vector<int> a)
{
	cout<<"\n Printing Array ->"<<endl;
	for(int i=0; i<a.size(); i++)
		cout<<" "<<a[i]<<"\t";
	cout<<endl;
}

void selection_sort(vector<int> &a)
{
	for(int i=0; i<a.size()-1; i++)
	{
		int min=i;
		for(int j=i+1; j<a.size(); j++)
			if(a[j]<a[min])
				min=j;
		
		if(min!=i)
		swap(a[i],a[min]);
	}
}

int main()
{
	vector<int> a;
	
	cout<<"\n Array : ";
	read(a);
	
	cout<<"\n Array before sorting : ";
	print(a);
	
	selection_sort(a);
	
	cout<<"\n Array after sorting in ascending order : ";
	print(a);
	
	return 0;
}
