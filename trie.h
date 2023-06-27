#include<bits/stdc++.h>
#include<unordered_map>
#include<iostream>
#include<string>
using namespace std;

class Trie;//forward declaration
class Node
{
	char data;
	unordered_map <char, Node *>m;
	bool isTerminal;
	public:
		Node(char d)
		{
			data=d;
			isTerminal=false;
		}
		friend class Trie;
};
class Trie
{
	Node *root;
	public:
		Trie()
		{
			root=new Node('\0');
		}
		void insert(string word)
		{
			Node *temp=root;
			for(int i=0; word[i]!='\0'; i++)
			{
				char ch=word[i];
				if(temp->m.count(ch)==0){
					Node *n=new Node(ch);
					temp->m[ch]=n;
				}
				temp=temp->m[ch];
			}
			temp->isTerminal=true;
		}
		bool search(string word)
		{
			Node *temp=root;
			for(int i=0; word[i]!='\0'; i++)
			{
				char ch=word[i];
				if(temp->m.count(ch==0))
				{
					return false;
				}
				temp=temp->m[ch];
			}
			return temp->isTerminal;
		}
};
