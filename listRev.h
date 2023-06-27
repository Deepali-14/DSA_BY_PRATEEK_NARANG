#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class List;
class Node
{
    int data;
    public:
        Node *next;
        Node(int d)
        {
            data=d;
            next=NULL;//assignment
        }
        ~Node()
        {
            if(next!=NULL)
            {
                delete next;
            }
        }
        int getData()
        {
            return data;
        }
        friend class List;
};
class List
{
    Node *head;
    Node *tail;
    public:
        List()
        {
            head=NULL;
            tail=NULL;
        }
        ~List()
        {
            if(head!=NULL)
            {
                delete head;
                head=NULL;
            }
        }
        Node *begin()
        {
            return head;
        }
        void push_front(int data)
        {
            Node *temp=new Node(data);
            if(head==NULL)
            {
                head=tail=temp;
                return;
            }
            else
            {
                temp->next=head;
                head=temp;
                return;
            }
        }
        void push_back(int data)
        {
            Node *temp=new Node(data);
            if(head==NULL)
            {
                head=tail=temp;
                return;
            }
            else
            {
                tail->next=temp;
                tail=temp;
                return;
            }
        }
        void insert(int data, int pos)
        {
            if(head==NULL)
            {
                cout<<"No data, hence no insertion"<<endl;
                return;
            }
            else
            {
                if(pos==0)
                {
                    push_front(data);
                }
                else
                {
                    Node *temp=head;
                    Node *p=new Node(data);
                    for(int i=1; i<pos; i++)
                    {
                        temp=temp->next;
                    }
                    Node *n=temp->next;
                    p->next=n;
                    temp->next=p;
                }
                return;
            }
        }
        void print()
        {
            if(head==NULL)
            {
                cout<<"No data to display"<<endl;
                return;
            }
            else
            {
                //Node *head=begin();
                Node *temp=head;
                while(temp!=NULL)
                {
                    if(temp->next==NULL)
                    {
                        cout<<temp->data;
                    }
                    else
                    {
                        cout<<temp->data<<"->";
                    }
                    temp=temp->next;
                }
                cout<<endl;
                return;
            }
        }
        void pop_front()
        {
            if(head==NULL)
            {
                cout<<"Nothing to pop"<<endl;
            }
            else
            {
                Node *temp=head;
                head=temp->next;
                temp->next=NULL;
                delete temp;
            }
            return;
        }
        void pop_back()
        {
            if(head==NULL)
            {
                cout<<"Nothing to pop"<<endl;
            }
            else
            {
                Node *temp=head;
                while(temp->next->next!=NULL)
                {
                    temp=temp->next;
                }
                Node *n=temp->next;
                temp->next=NULL;
                delete n;
            }
            return;
        }
        void pop(int pos)
        {
            if(head==NULL)
            {
                cout<<"Nothing to pop"<<endl;
            }
            else
            {
                if(pos==0)
                {
                    pop_front();
                    return;
                }
                Node *temp=head;
                for(int i=1; i<pos; i++)
                {
                    temp=temp->next;
                }
                Node *n=temp->next;
                temp->next=n->next;
                n->next=NULL;
                delete n;
            }
            return;
        }
        bool search(int key)
        {
            if(head==NULL)
            {
                cout<<"Nothing to search as linked list is empty"<<endl;
                return false;
            }
            else
            {
                Node *temp=head;
                while(temp!=NULL)
                {
                    if(temp->data==key)
                    {
                        return true;
                    }
                    temp=temp->next;
                }
                return false;
            }
        }
        bool recursiveSearch(int key, Node *head)
        {
            if(head==NULL)
            {
                return false;
            }
            if(head->data==key)
            {
                return true;
            }
            recursiveSearch(key, head->next);
        }
        int searchHelper(int k, Node *temp)
        {
            if(temp==NULL)
            {
                return -1;
            }
            if(temp->data==k)
            {
                return 0;
            }
            int subIdx=searchHelper(k,temp->next);
            if(subIdx==-1)
            {
                return -1;
            }
            return subIdx+1;
        }
        int recursiveS(int key)
        {
            int idx=searchHelper(key, head);
            return idx;
        }
        int itSearch(int k)
        {
            Node *temp=head;
            if(temp==NULL)
            {
                cout<<"Nothing to search as linked list is empty"<<endl;
                return -1;
            }
            int idx=0;
            while(temp!=NULL)
            {
                if(temp->data==k)
                {
                    return idx;
                }
                idx++;
                temp=temp->next;
            }
            return -1;
        }        
};