#include<iostream>
#include "list.h"
using namespace std;
int main()
{
    List l;
    l.push_front(1);
    l.push_front(0);
    l.push_back(3);
    l.push_back(5);
    l.push_back(47);
    l.push_back(4);
    l.push_front(-1);
    l.insert(2,2);
    Node *head=l.begin();
//  while(head!=NULL)
//  {
//      if(head->next==NULL)
//          cout<<head->getData();
//      else
//          cout<<head->getData()<<"->";
//      head=head->next;
//  }
    l.print();
    int key;
    cout<<endl;
    cout<<"Enter the key to search for:";
    cin>>key;
    head=l.begin();
    if(l.search(head, key))
    {
        cout<<key<<" found!"<<endl;
    }
    else
    {
        cout<<key<<" not found"<<endl;
    }
    if(l.recursiveSearch(head, key))
    {
        cout<<key<<" found!"<<endl;
    }
    else
    {
        cout<<key<<" not found"<<endl;
    }
    int idx=l.recursiveSearchIndex(key);
    if(idx==-1)
        cout<<key<<" not found"<<endl;
    else
        cout<<key<<" found at index "<<idx<<endl;
    int i=l.alternateSearch(key);
    if(i==-1)
    {
        cout<<key<<" not found"<<endl;
    }
    else{
        cout<<key<<" found at index "<<i<<endl;
    }
    //cout<<"HI"<<endl;
    l.pop_front();
    l.pop_front();
    l.pop_back();
    l.pop_back();
    l.pop(2);
    //cout<<"HI"<<endl;
//  head=l.begin();
//  while(head!=NULL)
//  {
//      if(head->next==NULL)
//          cout<<head->getData();
//      else
//          cout<<head->getData()<<"->";
//      head=head->next;
//  }
    l.print();
    return 0;
}