//Program to show use of inbuilt find function in cpp stl
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(4);
	arr.push_back(5);
	cout<<"Enter element to search : ";
	int key;
	cin>>key;
	vector<int>::iterator it=find(arr.begin(),arr.end(),key);
	if(it!=arr.end())
		cout<<key<<" found at : "<<it-arr.begin()<<endl;
	else
		cout<<key<<" not found"<<endl;
	return 0;
}
