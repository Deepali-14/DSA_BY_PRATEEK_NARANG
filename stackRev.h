#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Stack;
template<typename T>
class Node
{
    public:
        T data;
        Node <T> * next;
        Node(int d)
        {
            data=d;
        }
        // friend class Stack;
};
template<typename T>
class Stack
{
    Node <T>* head;
    public:
        Stack()
        {
            head=NULL;
        }
        void push(int d)
        {
            Node<T> *temp=new Node<T> (d);
            temp->next=head;
            head=temp;
            return;
        }
        bool empty()
        {
            return head==NULL;
        }
        int top()
        {
            if(head==NULL)
            {
                cout<<"There is nothing at top as stack is empty"<<endl;
                return -999;
            }
            else
                return head->data;   
        }
        int pop()
        {
            if(head==NULL)
            {
                cout<<"There is nothing to pop as stack is empty"<<endl;
                return -999;
            }
            else
            {
                Node<T> *temp=head;
                head=head->next;
                int d=temp->data;
                delete temp;
                return d;
            }
        }
        void print()
        {
            Node<T> *temp=head;
            if(temp==NULL)
            {
                cout<<"There is nothing to print as stack is empty"<<endl;
            }
            else
            {
                while(temp!=NULL)
                {
                    cout<<temp->data<<endl;
                    temp=temp->next;
                }
            }
        }
};
// template<typename T>
// class Stack
// {
//     vector<T> arr;
//     public:
//         void push(int data)
//         {
//             arr.push_back(data);
//         }
//         int pop()
//         {
//             if(arr.size()==0)
//             {
//                 cout<<"There is nothing to pop as stack is empty"<<endl;
//                 return -999;
//             }
//             int t=top();
//             arr.pop_back();
//             return t;
//         }
//         int top()
//         {
//             if(arr.size()==0)
//             {
//                 cout<<"There is nothing at top as stack is empty"<<endl;
//                 return -999;
//             }
//             int s=arr.size()-1;
//             return arr[s];
//         }
//         bool empty()
//         {
//             return arr.size()==0;
//         }
//         void print()
//         {
//             if(arr.size()==0)
//             {
//                 cout<<"There is nothing to print as stack is empty"<<endl;
//                 return;
//             }
//             for(int i=arr.size()-1; i>=0; i--)
//             {
//                 cout<<arr[i]<<endl;
//             }
//         }
// };