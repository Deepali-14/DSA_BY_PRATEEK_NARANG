//To count the set bits
//set bits are nothing but the number of 1's in a bit



#include<iostream>
using namespace std;

int count_bits(int n)
{
	int cnt=0;
	while(n>0)
	{
		int last_bit=(n&1);
		cnt+=last_bit;
		n=n>>1;
	}
	return cnt;
}

int main()
{
	int n;
	cout<<"Enter a number:";
	cin>>n;
	cout<<"The number of set bits in "<<n<<" is "<<count_bits(n)<<endl;
	return 0;
}
