// To check if array is sorted or not using two methods



#include<iostream>
using namespace std;
bool arraysort2(int arr[], int n, int i)
{
	if(i==n-1)
	{
		return true;
	}
	if(arr[i] <arr[i+1] && arraysort2(arr+1, n, i+1))
	{
		return true;
	}
	else 
		return false;
}
bool arraysort1(int arr[], int n)
{
	if(n==1 or n==0)
	{
		return true;
	}
	if(arr[0] <arr[1] && arraysort1(arr+1, n-1))
	{
		return true;
	}
	else 
		return false;
}
int main()
{
	int n;
	cout<<"Enter the number of elements present in the array: ";
	cin>>n;
	int* arr=new int[n];
	cout<<"Enter the elements of the array : "<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Method 1"<<endl;
	if(arraysort1(arr, n))
		cout<<"The element is sorted"<<endl;
	else
		cout<<"The element is not sorted"<<endl;
	cout<<"Method 2"<<endl;
	if(arraysort2(arr, n, 0))
		cout<<"The element is sorted"<<endl;
	else
		cout<<"The element is not sorted"<<endl;
	return 0;
}
