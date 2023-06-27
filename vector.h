#include<iostream>
using namespace std;
template <typename T>
class Vector
{
	T *arr;
	T cs, ms;
	public:
		Vector(const int max_size)
		{
			cs=0;
			ms=max_size;
			arr=new T[ms];
		}
		
		void push_back(const int d)
		{
			if(cs==ms)
			{
				T *oldarr=arr;
				ms=2*ms;
				arr = new T[ms];
				for(int i=0; i<cs; i++)
					arr[i]=oldarr[i];
				delete []oldarr;
			}
			arr[cs]=d;
			cs++;
		}
		
		const T pop_back()
		{
			if(cs>=0)
			{
				T d=arr[cs-1];
				--cs;
				return d;
			}
		}
		
		T front()const
		{
			return arr[0];
		}
		
		T back()const
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
		
		T at(const int i) const
		{
			return arr[i];
		}
		
		T operator [](const int i) const
		{
			return arr[i];
		}
};
