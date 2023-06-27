#include<iostream>
#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Node
{
    public:
        T data;
        Node<T>* next;
        Node(T d)
        {
            data=d;
        }
};
template <typename T>
class Stack
{
    Node<T> *head;
    public:
        Stack()
        {
            head=NULL;
        }
        void push(T data)
        {
            Node <T> *n=new Node <T>(data);
            n->next=head;
            head=n;
        }
        bool  empty()
        {
            return head==NULL;
        }
        T top()
        {
            return head->data;
        }
        void pop()
        {
            if(head==NULL)
            {
                cout<<"The stack is empty, there is nothing to push!"<<endl;
            }
            if(head!=NULL)
            {
                Node<T> *temp=head;
                head=head->next;
                delete temp;
            }
        }
        void print()
        {
            while(head!=NULL)
            {
                cout<<head->data<<" ";
                head=head->next;
            }
        }
};