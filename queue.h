#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Queue
{
    int * arr;
    int cs;
    int ms;
    int front;
    int rear;
    public:
        Queue(int default_size=5)
        {
            ms=default_size;
            arr=new int[ms];
            cs=0;
            front=0;
            rear=ms-1;
        }
        bool full()
        {
            return cs==ms;
        }
        void push(int data)
        {
            if(!full())
            {
                rear=(rear+1)%ms;
                arr[rear]=data;
                cs++;
            }
            else
            {
                cout<<"Cannot be pushed as queue is full"<<endl;
            }
        }
        bool empty()
        {
            return cs==0;
        }
        int pop()
        {
            if(!empty())
            {
                int t=arr[front];
                front=(front+1)%ms;
                cs--;
                return t;
            }
            else
            {
                cout<<"Cannot be popped as queue is empty"<<endl;
                return -999;
            }
        }
        int get_front()
        {
            return arr[front];
        }
        void print()
        {
            if(empty())
            {
                cout<<"There is nothing to print as queue is empty"<<endl;
                return;
            }
            while(!empty())
            {
                cout<<get_front()<<endl;
                pop();
            }
        }
};