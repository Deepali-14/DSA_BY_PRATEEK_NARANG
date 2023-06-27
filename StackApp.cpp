#include<iostream>
#include "stackRev.h"
#include<bits/stdc++.h>
using namespace std;
void insertAtBottom(Stack<int> &s, int data)
{
    if(s.empty())
    {
        s.push(data);
        return;
    }
    int t=s.top();
    s.pop();
    insertAtBottom(s,data);
    s.push(t);
}
void reverse(Stack<int> &s)
{
    if(s.empty())
    {
        return;
    }
    int t=s.top();
    s.pop();
    reverse(s);
    insertAtBottom(s,t);
}
int main()
{
    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<"Printing stack:"<<endl;
    s.print();
    if(s.empty())
        cout<<"Stack is empty"<<endl;
    else
        cout<<"Stack is not empty"<<endl;
    if(s.top()==-999)
    {
    }
    else
         cout<<"Top element : "<<s.top()<<endl;
    int t=s.pop();
    if(t==-999)
    {
    }
    else
        cout<<"Popped element : "<<t<<endl;
    cout<<"Printing stack:"<<endl;
    s.print();
    insertAtBottom(s,-99);
    cout<<"Printing stack:"<<endl;
    s.print();
    reverse(s);
    cout<<"Printing stack:"<<endl;
    s.print();
    return 0;
}