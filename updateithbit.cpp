//To update ith bit of a number
//Here first we do clear bit and then shift the position of the bit to that index and set the bit to it



#include<iostream>
using namespace std;
void clearithbit(int &n, int i)
{
	int mask;
	mask=~(1<<i);
	n=n&mask; //Here the no. is itself modified, hence no need to return 
}
void updateithbit(int &n, int i, int v)
{
	int mask;
	mask=v<<i;
	n=n|mask; //Here the no. is itself modified, hence no need to return 
}
int main()
{
	int n,i,v;
	cout<<"Enter a number:";
	cin>>n;
	cout<<"Enter index:";
	cin>>i;
	cout<<"Enter bit to update to as only 0 or 1:";
	cin>>v;
	clearithbit(n,i);
	cout<<"The no. is "<<n<<" after clearing bit at index "<<i<<endl;
	updateithbit(n,i,v);
	cout<<"The no. is "<<n<<" after updating bit at index "<<i<<" to bit "<<v<<endl;
	return 0;
}
