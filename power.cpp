// To write code to find power of a number, both numbers and power are given as input



#include<iostream>

using namespace std;

int power(int a, int n)
{
	if(n==0)
		return 1;
	return a*power(a, n-1);
}
int main()
{
	cout<<"Enter the number : ";
	int n;
	cin>>n;
	cout<<"Enter the power : ";
	int p;
	cin>>p;
	
	cout<<p<<" raised to the power "<<n<<" is "<<power(n,p)<<endl;
	return 0;
}
