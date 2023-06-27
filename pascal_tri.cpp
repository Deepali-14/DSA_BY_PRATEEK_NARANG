//To print pascal triangle based on binomial expression formula
//(a+b)^0=1
//(a+b)^1=a(1)+b(1)
//(a+b)^2=1(a)^2ab+1(b)^2;
//(a+b)^3=1(a)^3+3(a)^2+3a(b)^2+1(b)^3;

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter no. of rows : ";
	cin>>n;
	
	for(int i=1; i<=n; i++)
	{
		int coef=1;
		for(int k=n-i; k>0; k--)
		cout<<" ";
		for(int j=1; j<=i; j++)
		{
			cout<<coef<<" ";
			coef=coef*(i-j)/j;
		}
		cout<<endl;
	}
	return 0;
}
