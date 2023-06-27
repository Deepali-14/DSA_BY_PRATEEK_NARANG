//Code to perform rotated array search to find the given key index
//7 9 10 1 2 3 4 5 6
//Input-4
//Output-6



#include<iostream>
using namespace std;



void read(int a[], int n)
{
	cout<<"\n Reading Array (half sorted or rotated)->"<<endl;
	for(int i=0; i<n; i++)
		cin>>a[i];
}

void print(int a[], int n)
{
	cout<<"\n Printing Array (half sorted or rotated)->"<<endl;
	for(int i=0; i<n; i++)
		cout<<" "<<a[i]<<"\t";
	cout<<endl;
}

int rotated_search(int a[], int key, int n)
{
	int s=0;
	int e=n-1;
	while(s<=e)
	{
		int mid=(s+e)/2;
		if(a[mid]==key)
		{
			return mid;
		}
		if(a[s]<=a[mid])
		{
			if(key>=a[s] && key<=a[mid])
			{
				e=mid-1;
			}
			else
			{
				s=mid+1;
			}
		}
		else
		{
			if(key>=a[mid] && key<=a[e])
			{
				s=mid+1;
			}
			else
			{
				e=mid-1;
			}
		}
	}
	return -1;
}
int main()
{
	int n;
	
	cout<<"Enter n : ";
	cin>>n;
	
	int* a=new int [n];
	
	read(a,n);
	
	cout<<"\nEnter the key to find : ";
	int key;
	
	cin>>key;
	
	int at=rotated_search(a, key, n);
	if(at==-1)
	{
		cout<<"The element cannot be found"<<endl;
	}
	else
	{
		cout<<key<<" is found at index "<<at<<endl;
	}
	return 0;
}
