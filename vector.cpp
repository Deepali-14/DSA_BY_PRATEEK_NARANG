// Program of vector

#include<iostream>

#include<bits/stdc++.h>

#include<vector>

using namespace std;

int main()
{
	vector<int> arr(5,7); // (Fill constructor) To fill 5 sized array with 7 or vector<int> arr={1,2,3,4,5}
	
	cout<<"\n "<<arr.size()<<endl; // To print no. of elements in the array
	
	cout<<"\n "<<arr.capacity()<<endl; // To print current total capacity of array to hold integers
	
	arr.pop_back();
	
	arr.push_back(18);
	
	arr.push_back(20);
	
	cout<<"\n "<<arr.size()<<endl; // To print no. of elements in the array
	
	cout<<"\n "<<arr.capacity()<<endl; // To print current total capacity of array to hold integers
	
	cout<<"\n Array ->"<<endl;
	 
	for(int i=0; i<arr.size(); i++)
		cout<<" "<<arr[i]<<"\t";
		
	cout<<endl;
		
	return 0;
}
