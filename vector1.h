template<typename t>
class Vector
{
	int cs, ms;
	t *arr;
	public:
	Vector(const int max_size=1)
	{
		cs=0;
		ms=max_size;
		arr= new t[ms];
	}
	void push_back(const int d)
	{
		if(cs==ms)
		{
			t *oldArr=arr;
			ms=2*ms;
			arr= new t[ms];
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
	const t front() const
	{
		return arr[0];
	}
	const t back() const
	{
		return arr[cs-1];
	}
	const t at(int i) const
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
	const t operator[](int i) const
	{
		return arr[i];
	}
	void deletel()
	{
		delete [] arr;
	}
};
