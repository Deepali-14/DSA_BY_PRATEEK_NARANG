//to do fast exponentiation of a number in log(n) time



#include<iostream>
using namespace std;
int exp(int a, int n)
{
	int ans=1;
	while(n>0)
	{
		int last_bit=(n&1);
		if(last_bit)
		{
			ans=ans*a;
		}
		a=a*a;
		n=n>>1;
	}
	return ans;
}
int main()
{
	int n,a;
	cout<<"Enter a number(a) : ";
	cin>>a;
	cout<<"Enter a power(n) : ";
	cin>>n;
	cout<<"Exponentiation of "<<a<<" raised to the power "<<n<<" is "<<exp(a,n)<<endl;
	return 0;
}
