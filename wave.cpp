//Program of wave traversal of a multidimensional matrix
//1 2 3 4
//12 13 14 5
//11 16 15 6
//10 9 8 7
//111 222 333 444
//4 5 6 7 444 333 8 15 14 3 222 9 16 13 2 111 10 11 12 1 

#include<iostream>
using namespace std;
int main()
{
	int a[5][5]={{1,2,3,4},{12,13,14,5},{11,16,15,6},{10,9,8,7},{111,222,333,444}};
	int m=5,n=4;
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	int wav=1,j=n-1;
	
	while(j>=0)
	{
		if(wav==1)
		{
			for(int i=0; i<m; i++)
			{
				cout<<a[i][j]<<" ";
			}
			j--;
			wav=0;
		}
		else
		{
			for(int i=m-1; i>=0; i--)
			{
				cout<<a[i][j]<<" ";
			}
			j--;
			wav=1;
		}
	}
		
	return 0;
}
