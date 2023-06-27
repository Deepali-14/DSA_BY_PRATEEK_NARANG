#include<iostream>
using namespace std;

int ** create2DArray(int r, int c)
{
	cout<<"Start function"<<endl;
	int **arr=new int* [r];
	for(int i=0; i<r; i++)
	{
		arr[i]=new int[c];
	}
	int value=0;
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			arr[i][j]=value;
			value++;
		}
	}
	cout<<"End function"<<endl;
	return arr;
}
int main()
{
	int cols,rows;
	cout<<"Enter number of rows:";
	cin>>rows;
	cout<<"Enter number of columns:";
	cin>>cols;
	cout<<"Start main"<<endl;
	int ** arr=create2DArray(rows,cols);
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	delete [] arr;
	
	cout<<"End main"<<endl;
	return 0;
}
