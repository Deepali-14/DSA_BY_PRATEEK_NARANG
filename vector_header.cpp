#include<iostream>
#include"vector.h"
using namespace std;
int main()
{
	Vector<char> v(4);
	
	v.push_back('a');
	v.push_back('@');
	v.push_back('c');
	v.push_back('1');
	
	for(int i=0; i<v.size(); i++)
	{
		cout<<v.at(i)<<" ";
	}
	cout<<endl;
	
	cout<<"Size of vector : "<<v.size()<<endl;
	cout<<"Capacity of vector : "<<v.capacity()<<endl;
	
	cout<<"Front of vector : "<<v.front()<<endl;
	cout<<"Back of vector : "<<v.back()<<endl;
	
	v.push_back('v');
	
	for(int i=0; i<v.size(); i++)
	{
		cout<<v.at(i)<<" ";
	}
	cout<<endl;
	
	cout<<"Size of vector : "<<v.size()<<endl;
	cout<<"Capacity of vector : "<<v.capacity()<<endl;
	
	cout<<"Front of vector : "<<v.front()<<endl;
	cout<<"Back of vector : "<<v.back()<<endl;
	
	//int d=v.pop_back();
//	if(d==-999)
//		cout<<"There is no element in vector to pop"<<endl;
//	else
		cout<<"Popped element : "<<v.pop_back()<<endl;
	
	for(int i=0; i<v.size(); i++)
	{
		cout<<v.at(i)<<" ";
	}
	cout<<endl;
	
	cout<<"Front of vector : "<<v.front()<<endl;
	cout<<"Back of vector : "<<v.back()<<endl;
	
	cout<<"Size of vector : "<<v.size()<<endl;
	cout<<"Capacity of vector : "<<v.capacity()<<endl;
	
	cout<<"If vector is empty : "<<v.isempty()<<endl;
	
	for(int i=0; i<v.size(); i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	
	cout<<"Front of vector : "<<v.front()<<endl;
	cout<<"Back of vector : "<<v.back()<<endl;
	
	return 0;
}
