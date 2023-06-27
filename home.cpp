// Code to Go to Home recursively



#include<iostream>
using namespace std;
void getHome(int x, int Home)
{
	if(x==Home)
	{
		cout<<"Reached Home!"<<endl;
		return;
	}
	x=x+1;
	cout<<x<<endl;
	getHome(x, Home);
}
int main()
{
	int x, Home;
	cout<<"Enter value of x: ";
	cin>>x;
	cout<<"Enter value of Home: ";
	cin>>Home;
	getHome(x, Home);
	return 0;
}
