//Given a 2D sorted array, find an element in a staircase manner amintaining time complexity O(n)
#include<iostream>
using namespace std;
int main()
{
	int a[][5]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int m=4, n=4;
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	cout<<"\n Enter element to search : ";
	int key;
	cin>>key;
	int i=0, j=n-1;
	while(j>=0 && i<=n-1)
	{
		if(a[0][0]>key || key>a[m-1][n-1])
		{
			cout<<"\n Key element not found"<<endl;
			break;
		}
		
		if(a[i][j]>key)
		j--;
		
		else if(a[i][j]<key)
		i++;
		
		else
		{
			cout<<i<<" "<<j<<endl;
			break;
		}
		
	}
	return 0;
}
