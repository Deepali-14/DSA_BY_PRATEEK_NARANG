#include<iostream>
#include "queue.h"
#include<bits/stdc++.h>
using namespace std;

int main()
{
    Queue myqueue(7);
    myqueue.push(1);
    myqueue.push(2);
    myqueue.push(3);
    myqueue.push(4);
    myqueue.push(5);
    myqueue.push(6);
    myqueue.push(7);
    myqueue.push(8);
    int t=myqueue.pop();
    if(t==-999)
    {


    }
    else
        cout<<"Popped element = "<<t<<endl;
    t=myqueue.pop();
    if(t==-999)
    {


    }
    else
        cout<<"Popped element = "<<t<<endl;
    t=myqueue.pop();
    if(t==-999)
    {


    }
    else
        cout<<"Popped element = "<<t<<endl;
    myqueue.push(9);
    myqueue.push(10);
    cout<<"Printing the elements of the queue"<<endl;
    myqueue.print();
   
    return 0;
}