// To replace a bit by another bit in a range by first clearing and then setting it to given bit



#include<iostream>
using namespace std;
void clearbitsinrange(int &n, int i, int j)
{
	int a=(~0)<<(j+1);
	int b=(1<<i)-1;
	int mask=a|b;
	n=n&mask;
}
void replacebit(int &n, int i, int j, int m)
{
	clearbitsinrange(n,i,j);
	int mask=(m<<i);
	n=n|mask;
}
int main()
{
	int n,i,j,m;
	cout<<"Enter a number:";
	cin>>n;
	cout<<"Enter start index:";
	cin>>i;
	cout<<"Enter end index:";
	cin>>j;
	cout<<"Enter number to replace with:";
	cin>>m;
	replacebit(n,i,j,m);
	
	cout<<"The no. is "<<n<<" after replacing bit from index "<<i<<" to "<<j<<" by "<<m<<endl;
	return 0;
}
