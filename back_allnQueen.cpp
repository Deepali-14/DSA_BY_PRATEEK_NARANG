#include<iostream>
using namespace std;
void printBoard(int n, int board[][20])
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<board[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}
bool canPlace(int n, int board[][20], int x, int y)
{
	for(int j=0; j<x; j++)
	{
		if(board[j][y]==1)
		{
			return false;
		}
	}
	int i=x;
	int j=y;
	while(i>=0 && j>=0)
	{
		if(board[i][j]==1)
		{
			return false;
		}
		i--;
		j--;
	}
	i=x;
	j=y;
	while(i>=0 && j<n)
	{
		if(board[i][j]==1)
		{
			return false;
		}
		i--;
		j++;
	}
	return true;
}
int solveNQueen(int n, int board[][20], int i)
{
	if(i==n)
	{
		printBoard(n, board);
		return 1;
	}
	int ways=0;
	for(int j=0; j<n; j++)
	{
		if(canPlace(n, board, i , j))
		{
			board[i][j]=1;
			ways=ways+solveNQueen(n, board, i+1);
			board[i][j]=0;
		}
	}
	return ways;
}
int main()
{
	int board[20][20]={0};
	int n;
	cout<<"Enter the size of the board:";
	cin>>n;
	cout<<"No. of ways the queens can be placed on the board:"<<solveNQueen(n, board, 0)<<endl;
	return 0;
}
