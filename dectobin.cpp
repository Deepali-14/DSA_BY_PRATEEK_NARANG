//To change the given decimal number to binary number using bitwise operators



#include<iostream>
using namespace std;
int dectobin(int n)
{
	int p=1, ans=0;
	while(n>0)
	{
		int last_bit=(n&1);
		if(last_bit)
		{
			ans=ans+p*last_bit;
		}
		p=p*10;
		n=n>>1;
	}
	return ans;
}
int main()
{
	int n;
	cout<<"Enter a decimal number : ";
	cin>>n;
	cout<<"Binary equivalent of "<<n<<" is "<<dectobin(n)<<endl;
	return 0;
}
