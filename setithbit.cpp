//To set ith bit in a number
//it sets only 0 to 1 in a number and vice versa is not true



#include<iostream>
using namespace std;
void setithbit(int &n, int i)
{
	int mask;
	mask=1<<i;
	n=n|mask; //Here the no. is itself modified, hence no need to return 
}
int main()
{
	int n,i;
	cout<<"Enter a number:";
	cin>>n;
	cout<<"Enter index:";
	cin>>i;
	setithbit(n,i);
	cout<<"The no. is "<<n<<" after setting bit at index "<<i<<endl;
	return 0;
}
