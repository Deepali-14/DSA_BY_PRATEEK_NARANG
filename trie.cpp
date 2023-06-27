#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
#include "trie.h"
using namespace std;
int main()
{
	string words[]={"hello", "he", "apple", "aple", "news"};
	Trie t;
	cout<<"Data entered in the trie data structure is ----->"<<endl;
	for(int i=0; string[i]!='\0'; i++)
	{
		t.insert(words[i]);
	}
	string key;
	cout<<"Enter the word to search in the trie data structure : ";
	cin>>key;
	z=t.search(key);
	if(z)
	{
		cout<<key<<" is present"<<endl;
	}
	else
	{
		cout<<key<<" is not present"<<endl;
	}
	return 0;
}
