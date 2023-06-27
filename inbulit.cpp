// Program on Inbuilt Sort, Comparators, Greater Function and Reverse using algorithm as header file

#include<iostream>

#include<algorithm>

using namespace std;

#define max 20

bool compare(int a, int b)
{
	return a<b;
}

void read(char v[], int n)
{
	cout<<"\n --------------------------ENTER ARRAY--------------------------"<<endl;
	for(int i=0; i<n; i++)
		cin>>v[i];
}

void print(char v[], int n)
{
	cout<<"\n --------------------------ENTERED ARRAY--------------------------"<<endl;
	for(int i=0; i<n; i++)
		cout<<v[i]<<" ";
	cout<<endl;
}

int main()
{
	char a[max];
	int n;
	
	cout<<"\n Enter size of array : ";
	cin>>n;
	
	read(a,n);
	
	sort(a,a+n);  //method 1
	
	print(a,n); 
	
	reverse(a,a+n);  //method 2
	
	print(a,n);
	
	sort(a,a+n,compare);  //method 2
	
	print(a,n);
	
	sort(a,a+n,greater<int> ());  //method 3
	
	print(a,n);
	
	return 0;
}
