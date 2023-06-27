#include<iostream>
#include "hashTable.h"
using namespace std;

int main()
{
	Hashtable<int> h;
	h.insert("Mango", 100);
	h.insert("Apple", 120);
	h.insert("Banana", 140);
	h.insert("Orange", 200);
	h.insert("Kiwi", 210);
	h.insert("Papaya", 220);
	h.insert("Litchi", 230);
	h.print();
	cout<<"Enter the fruit to search in HashTable : ";
	string fruit;
	cin>>fruit;
	int *price=h.search(fruit);
	if(price!=NULL)
	{
		cout<<"Price of "<<fruit<<" is : "<<*price<<endl;
	}
	else
	{
		cout<<fruit<<" is not present"<<endl;
	}
	h["Watermelon"]=200;
	cout<<"New fruit cost : "<<h["Watermelon"]<<endl;
	h["Watermelon"]+=20;
	cout<<"New fruit updated cost: "<<h["Watermelon"]<<endl;
	return 0;
}
