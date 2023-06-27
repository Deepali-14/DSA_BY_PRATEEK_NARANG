// To find the last occurence of an element in an array



#include<iostream>
using namespace std;


int LastOcc(int arr[], int n, int key)
{
	if(n==0)
	{
		return -1;
	}
	int subindex=LastOcc( arr+1, n-1, key );
	if(subindex==-1)
	{
		if(arr[0]==key)
		{
			return 0;
		}
		else
			return -1;
	}
		return subindex+1;
	return -1;
}
int main()
{
	int n, key;
	cout<<"Enter the number of elements present in the array: ";
	cin>>n;
	int* arr=new int[n];
	cout<<"Enter the elements of the array : "<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the key to find: ";
	cin>>key;
	cout<<key<<" is present at index "<<LastOcc(arr, n, key)<<endl;
	return 0;
}
