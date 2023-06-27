//Program of spiral traversal of a multidimensional matrix
//1 2 3 4
//12 13 14 5
//11 16 15 6
//10 9 8 7
//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16

#include<iostream>
using namespace std;
int main()
{
	int a[5][5]={{1,2,3,4},{12,13,14,5},{11,16,15,6},{10,9,8,7}};
	int n=4;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<4; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	int sr=0, er=n-1, sc=0, ec=n-1;
	
	while(sr<=er && sc<=ec)
	{
		for(int i=sc;i<=ec;i++)
			cout<<a[sr][i]<<" ";
			
		for(int i=sr+1;i<=er;i++)
			cout<<a[i][ec]<<" ";
			
		for(int i=ec-1;i>=sc;i--)
		{
			if(sr==er)
				break;
			cout<<a[er][i]<<" ";
		}
			
		for(int i=er-1;i>=sr+1;i--)
		{
			if(sc==ec)
				break;
			cout<<a[i][sc]<<" ";
		}
		sr++;
		sc++;
		er--;
		ec--;
	}
		
	return 0;
}
