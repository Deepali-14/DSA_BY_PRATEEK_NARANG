// To write code to find power of a number, both numbers and power are given as input via reduced time complexity



#include<iostream>

using namespace std;

int powerfast(int a, int n)
{
	if(n==0)
		return 1;
	int sub= powerfast(a, n/2);
	int subsq=sub*sub;
	if(n&1)
	{
		return a*subsq;
	}
	return subsq;
}
int main()
{
	cout<<"Enter the number : ";
	int n;
	cin>>n;
	cout<<"Enter the power : ";
	int p;
	cin>>p;
	
	cout<<p<<" raised to the power "<<n<<" is "<<powerfast(n,p)<<endl;
	return 0;
}
