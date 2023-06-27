// To find all the occurence of an element in an array
#include<iostream>
#include<vector>
using namespace std;
vector<int> vec;

void helper(int k, vector<int> v, int i)
{
	if(i==v.size())
	{
		return;
	}
	if(v[i]==k)
	{
		vec.push_back(i);
	}
	helper(k, v, i+1);
}

vector<int> findAllOccurences(int k, vector<int> v)
{
	vec.clear();
	helper(k, v, 0);
	return vec;
}
int main()
{
	int n, k, x;
	cout<<"Enter the number of elements present in the array: ";
	cin>>n;
	vector<int> v;
	cout<<"Enter the elements of the vector : "<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>x;
		v.push_back(x);
	}
	cout<<"Vector : "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	cout<<"Enter the key to find: ";
	cin>>k;
	vector<int> vec=findAllOccurences(k, v);
	cout<<"Resultant vector : "<<endl;
	for(int i=0; i<vec.size(); i++)
	{
		cout<<vec[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
