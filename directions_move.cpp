#include<iostream>
using namespace std;
int main()
{
	char a[1000];
	int x=0,y=0;
	cout<<"Enter the directions : ";
	cin.getline(a,1000);
	for(int i=0; a[i]!='\0'; i++)
	{
		switch(a[i])
		{
			case 'N':
				y++;
				break;
			case 'S':
				y--;
				break;
			case 'E':
				x++;
				break;
			case 'W':
				x--;
				break;
		}
	}
	cout<<"x="<<x<<" and y="<<y<<endl;
	if(x==0 && y==0)
	{
		cout<<"At Origin";
	}
	else if(x>=0 && y>=0)
	{
		while(y--)
			cout<<"N";
		while(x--)
			cout<<"E";
	}
	else if(x<=0 && y>=0)
	{
		while(y--)
			cout<<"N";
		while(x++)
			cout<<"W";
	}
	else if(x>=0 && y<=0)
	{
		while(y++)
			cout<<"S";
		while(x--)
			cout<<"E";
	}
	else if(x<=0 && y<=0)
	{
		while(y++)
			cout<<"S";
		while(x++)
			cout<<"W";
	}
	return 0;
}
