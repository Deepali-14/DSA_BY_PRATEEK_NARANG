// To find the number spell like 2020 goes like two zero two zero


#include<iostream>
using namespace std;


string spell[]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void numSpell(int n)
{
	if(n==0)
	{
		return ;
	}
	int last_digit=n%10;
	numSpell(n/10);
	cout<<spell[last_digit]<<" ";
}

int main()
{
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	cout<<n<<" can be written as ";
	numSpell(n);
	return 0;
}
