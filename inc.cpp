// To print the elements in increasing order starting from 0 upto given range



#include<iostream>
using namespace std;
void inc(int n)
{
	if(n==-1)
	{
		return;
	}
	inc(n-1);
	cout<<n<<endl;
	return ;
}
int main()
{
	int n;
	
	cout<<"Enter the range:";
	cin>>n;
	
	inc(n);
	return 0;
}

