#include<iostream>
using namespace std;
class Vector
{
	int cs, ms;
	int *arr;
	public:
	Vector(const int max_size=1)
	{
		cs=0;
		ms=max_size;
		arr= new int[ms];
	}
	void push_back(const int d)
	{
		if(cs==ms)
		{
			int *oldArr=arr;
			ms=2*ms;
			arr= new int[ms];
			for(int i=0; i<cs; i++)
			{
				arr[i]=oldArr[i];
			}
			delete [] oldArr;
		}
		arr[cs]=d;
		cs++;
	}
	void pop_back()
	{
		if(cs>=0)
		{
			cs--;
		}
	}
	bool isEmpty()
	{
		return cs==0;
	}
	const int front() const
	{
		return arr[0];
	}
	const int back() const
	{
		return arr[cs-1];
	}
	const int at(int i) const
	{
		return arr[i];
	}
	const int size() const
	{
		return cs;
	}
	const int capacity() const
	{
		return ms;
	}
	const int operator[](int i) const
	{
		return arr[i];
	}
	void deletel()
	{
		delete [] arr;
	}
};
int main(){
	Vector v(5);
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
