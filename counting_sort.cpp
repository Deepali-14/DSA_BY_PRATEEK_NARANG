// Program on counting sort

#include<iostream>

#include<vector>

using namespace std;

void read(vector<int> &v, int n)
{
	int m;
	
	for(int i=0; i<n; i++)
	{
		cin>>m;
		v.push_back(m);
	}
}

void print(vector<int> v)
{	
	for(int i=0; i<v.size(); i++)
		cout<<" "<<v.at(i)<<" ";
	cout<<endl;
}

void counting_sort(vector<int> &v)
{
	int largest=-1; //assuming all elements are greater than or equal to 0
	
	cout<<"\n Size : "<<v.size()<<endl;
	
	for(int i=0; i<v.size(); i++)
		largest=max(largest, v[i]);   //getting largest of all
		
	cout<<endl<<" Largest : "<<largest<<endl;

	vector<int> freq(largest+1, 0);   //initializing freq array of size (largest+1) to 0
	for(int i=0; i<v.size(); i++)
		freq[v[i]]++;
		
	int j=0;
	for(int i=0; i<=largest; i++)   //updating original array
	{
		while(freq[i]>0)
		{
			v[j]=i;
			freq[i]--;
			j++;
		}
	}
	
	return;
}

int main()
{
	vector<int> v;
	
	cout<<"\n Enter number of elements you want to enter : ";
	int n;
	cin>>n;
	
	cout<<"\n ----------------- ENTER ARRAY ------------------"<<endl;
	read(v,n);
	
	cout<<"\n ----------------- ENTERED ARRAY ------------------"<<endl;
	print(v);
	
	counting_sort(v);
	cout<<"\n ----------------- SORTED ARRAY ------------------"<<endl;
	print(v);
	
	return 0;
}
