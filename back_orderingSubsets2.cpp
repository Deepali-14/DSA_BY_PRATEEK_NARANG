#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void findSubsets(char *input, char *output, int i, int j)
{
	if(input[i]=='\0')
	{
		output[j]='\0';
		if(output[0]=='\0')
		{
			cout<<"NULL"<<endl;
		}
		cout<<output<<endl;
		return;
	}
	output[j]=input[i];
	findSubsets(input, output, i+1, j+1);
	findSubsets(input, output, i+1, j);
}

int main()
{
	char input[100];
	char output[100];
	cout<<"Enter the string to find subset of : ";
	cin>>input;
	findSubsets(input, output, 0, 0);
	
	return 0;
}
