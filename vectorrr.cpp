#include<iostream>
#include "vector1.h"
using namespace std;

int main(){
	
	Vector<char> a(5);
	a.push_back('a');
	a.push_back('z');
	a.push_back('b');
	a.push_back('y');
	a.push_back('c');
	a.pop_back();
	cout<<"Front = "<<a.front()<<endl;
	cout<<"Back = "<<a.back()<<endl;
	cout<<"At = "<<a.at(2)<<endl;
	cout<<"Size = "<<a.size()<<endl;
	cout<<"Capacity = "<<a.capacity()<<endl;
	for(int i=0; i<a.size(); i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"Check emptiness : "<<a.isEmpty()<<endl;
	cout<<endl;
	a.deletel();
	
	
	
	
	
	Vector<int> v(5);
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(15);
	v.push_back(6);
	v.pop_back();
	cout<<"Front = "<<v.front()<<endl;
	cout<<"Back = "<<v.back()<<endl;
	cout<<"At = "<<v.at(2)<<endl;
	cout<<"Size = "<<v.size()<<endl;
	cout<<"Capacity = "<<v.capacity()<<endl;
	for(int i=0; i<v.size(); i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	cout<<"Check emptiness : "<<v.isEmpty()<<endl;
	cout<<endl;
	v.deletel();
	return 0;
}
