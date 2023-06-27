#include<iostream>
using namespace std;
int factorial(int n)
{
	int ans=n;
	if(n==0)
	{
		return 1;
	}
	return ans*factorial(n-1);
	
}
int gridWays(int i, int j, int m, int n)
{
	int ans=(factorial(m+n-2))/(factorial(m-1)*factorial(n-1));
	return ans;
}
int main()
{
	int m, n;
	cout<<"Enter the value of m and n:";
	cin>>m>>n;
	cout<<"The total no. of ways we can reach from (0,0) to ("<<m<<","<<n<<")"<<":"<<gridWays(0,0,m,n);
	return 0;
}
