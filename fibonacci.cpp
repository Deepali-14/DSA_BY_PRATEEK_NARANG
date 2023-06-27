// Code for fibonacci series it returns the element present at that index starting from 0



#include<iostream>
using namespace std;
int fib(int n)
{
	if(n==0 || n==1)
	{
		return n;
	}
	int f1=fib(n-1);
	int f2=fib(n-2);
	return f1+f2;
}
int main()
{
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	cout<<fib(n)<<endl;
	return 0;
}
