#include<iostream>
using namespace std;
class Vector
{
	int *arr;
	int cs, ms;
	public:
		Vector(const int max_size)
		{
			cs=0;
			ms=max_size;
			arr=new int[ms];
		}
		
		void push_back(const int d)
		{
			if(cs==ms)
			{
				int *oldarr=arr;
				ms=2*ms;
				arr = new int[ms];
				for(int i=0; i<cs; i++)
					arr[i]=oldarr[i];
				delete []oldarr;
			}
			arr[cs]=d;
			cs++;
		}
		
		const int pop_back()
		{
			if(cs>=0)
			{
				int d=arr[cs-1];
				--cs;
				return d;
			}
		}
		
		int front()const
		{
			return arr[0];
		}
		
		int back()const
		{
			return arr[cs-1];
		}
		
		int size() const
		{
			return cs;
		}
		
		int capacity() const
		{
			return ms;
		}
		
		bool isempty() const
		{
			return (cs==0);
		}
		
		int at(const int i) const
		{
			return arr[i];
		}
		
		int operator [](const int i) const
		{
			return arr[i];
		}
};

int main()
{
	Vector v(4);
	
	v.push_back(5);
	v.push_back(4);
	v.push_back(3);
	v.push_back(-1);
	
	for(int i=0; i<v.size(); i++)
	{
		cout<<v.at(i)<<" ";
	}
	cout<<endl;
	
	cout<<"Size of vector : "<<v.size()<<endl;
	cout<<"Capacity of vector : "<<v.capacity()<<endl;
	
	cout<<"Front of vector : "<<v.front()<<endl;
	cout<<"Back of vector : "<<v.back()<<endl;
	
	v.push_back(8);
	
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
