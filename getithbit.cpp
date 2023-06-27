//To get ith bit of a number



#include<iostream>
using namespace std;
int getithbit(int n, int i)
{
	int mask;
	mask=1<<i;
	n=n&mask; //Here the no. is not modified
	return n>0?1:0;
}
int main()
{
	int n,i,bit;
	cout<<"Enter a number:";
	cin>>n;
	cout<<"Enter index:";
	cin>>i;
	bit=getithbit(n,i);
	cout<<bit<<" is the bit at "<<i<<" index in "<<n<<endl;
	return 0;
}
