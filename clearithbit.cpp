//To clear ith bit of a number
//Here 0 is cleared to 0 itself and 1 is cleared to 0



#include<iostream>
using namespace std;
void clearithbit(int &n, int i)
{
	int mask;
	mask=~(1<<i);
	n=n&mask; //Here the no. is itself modified, hence no need to return 
}
int main()
{
	int n,i;
	cout<<"Enter a number:";
	cin>>n;
	cout<<"Enter index:";
	cin>>i;
	clearithbit(n,i);
	cout<<"The no. is "<<n<<" after clearing bit at index "<<i<<endl;
	return 0;
}
