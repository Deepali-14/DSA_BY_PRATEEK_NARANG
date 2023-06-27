// To clear last i bits



#include<iostream>
using namespace std;
void clearlastithbit(int &n, int i)
{
	int mask=(-1<<i);
	n=n&mask;//Here the no. is itself modified, hence no need to return 
}
int main()
{
	int n,i;
	cout<<"Enter a number:";
	cin>>n;
	cout<<"Enter index:";
	cin>>i;
	clearlastithbit(n,i);
	cout<<"The no. is "<<n<<" after clearing last bits to index "<<i<<endl;
	return 0;
}
