#include<iostream>
using namespace std;
int main()
{
	int charCount[26] = { 0 };
	charCount['a' - 'a']++;
	charCount['a' - 'a']++;
	for(int i=0; i<26; i++)
	{
		cout<<charCount[i]<<endl;
	}
	return 0;
}
