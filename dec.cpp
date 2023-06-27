// To print the elements in decreasing order starting given number upto 0(inclusive)



#include<iostream>
using namespace std;
void dec(int n)
{
	if(n==-1)
	{
		return;
	}
	cout<<n<<endl;
	dec(n-1);
	return ;
}
int main()
{
	int n;
	
	cout<<"Enter the range:";
	cin>>n;
	
	dec(n);
	return 0;
}
