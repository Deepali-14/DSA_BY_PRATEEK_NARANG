#include<iostream>
#include<vector>
using namespace std;

class Heap
{
	vector<int> v;
	void heapify(int i)
	{
		int left=2*i;
		int right=2*i+1;
		int minIdx=i;
		if(left<v.size() and v[left]<v[minIdx])
		{
			minIdx=left;
		}
		if(right<v.size() and v[right]<v[minIdx])
		{
			minIdx=right;
		}
		if(minIdx!=i)
		{
			swap(v[i], v[minIdx]);
			heapify(minIdx);
		}
	}
	public:
		Heap(int default_size=10)
		{
			v.reserve(default_size+1);
			v.push_back(-1);
		}
		void push(int data)
		{
			v.push_back(data);
			int index=v.size()-1;
			int parent=index/2;
			while(index>1 and v[index]<v[parent])
			{
				swap(v[index], v[parent]);
				index=parent;
				parent=parent/2;
			}
		}
		int top()
		{
			return v[1];
		}
		void pop()
		{
			int idx=v.size()-1;
			swap(v[1], v[idx]);
			v.pop_back();
			heapify(1);
		}
		bool empty()
		{
			return v.size()==1;
		}
		void print()
		{
			for(int i=0; i<v.size(); i++)
			{
				cout<<v[i]<<" ";
			}
			cout<<endl;
		}
};
int main()
{
	Heap h;
	cout<<"Min heap after insertion"<<endl;
	h.push(20);
	h.push(60);
	h.push(50);
	h.push(90);
	h.push(80);
	h.push(100);
	h.push(70);
	h.print();// 20 60 50 90 80 100 70
	cout<<"\nElement on the top of min heap is "<<h.top()<<endl;
	if(h.empty())
	{
		cout<<"\nThe min heap is empty"<<endl;
	}
	else
	{
		cout<<"\nThe min heap is not empty"<<endl;
	}
	cout<<"\nMin Heap after deletion"<<endl;
	h.pop(); //50 60 70 90 80 100
	h.pop(); //60 80 70 90 100
	h.print();
	
}
