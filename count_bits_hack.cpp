//To count the set bits {hack}
//set bits are nothing but the number of 1's in a bit



#include<iostream>
using namespace std;

int count_bits_hack(int n)
{
	int cnt=0;
	while(n>0)
	{
		//removes the last set bit from the number, hence it runce for total no. of set bits in the number
		n=n&n-1;
		cnt++;
	}
	return cnt;
}

int main()
{
	int n;
	cout<<"Enter a number:";
	cin>>n;
	cout<<"The number of set bits in "<<n<<" is "<<count_bits_hack(n)<<endl;
	return 0;
}
