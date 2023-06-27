// To check if a number is power of 2 or not




#include<iostream>
using namespace std;

void check_power2(int n)
{
	if(n&(n-1))
		cout<<n<<" is not a power of 2";
	else
		cout<<n<<" is a power of 2";
}

int main()
{
	int n;
	cout<<"Enter a number:";
	cin>>n;
	check_power2(n);
	return 0;
}
