// To clear bits between a range



#include<iostream>
using namespace std;
void clearlastithbit(int &n, int i, int j)
{
	int a=~0<<(j+1);
	int b=(1<<i)-1;
	int mask=a|b;
	n=n&mask;
}
int main()
{
	int n,i,j;
	cout<<"Enter a number:";
	cin>>n;
	cout<<"Enter start index:";
	cin>>i;
	cout<<"Enter end index:";
	cin>>j;
	clearlastithbit(n,i,j);
	cout<<"The no. is "<<n<<" after clearing last range of bits from index "<<i<<" to "<<j<<endl;
	return 0;
}
