#include<iostream>
#include<bits/stdc++.h>
#include "listRev.h"
using namespace std;

int main()
{
    List l;
    l.push_back(1);
    l.push_front(0);
    l.push_back(2);
    l.push_front(-1);
    l.push_back(4);
    l.push_back(6);
    l.push_back(7);
    l.insert(3,4);//insertion begins at 0
    l.insert(5,6);
    l.print();
    l.pop_front();
    l.pop_back();
    l.pop_back();
    l.pop(2);
    l.pop(3);
    l.pop_front();
    l.print();
    cout<<"Enter a data to search:";
    int key;
    cin>>key;
    if(l.search(key))
    {
        cout<<key<<" found!"<<endl;
    }
    else
    {
        cout<<key<<" not found!"<<endl;
    }
    Node *head=l.begin();
    if(l.recursiveSearch(key, head))
    {
        cout<<key<<" found!"<<endl;
    }
    else
    {
        cout<<key<<" not found!"<<endl;
    }
    int i=l.recursiveS(key);
    if(i==-1)
    {
        cout<<key<<" not found!"<<endl;
    }
    else
    {
        cout<<key<<" found at index "<<i<<endl;
    }
    i=l.itSearch(key);
    if(i==-1)
    {
        cout<<key<<" not found!"<<endl;
    }
    else
    {
        cout<<key<<" found at index "<<i<<endl;
    }
    return 0;
}