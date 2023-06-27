#include<iostream>
using namespace std;
class List;//forward declaration
class Node
{
    int data;
    public:
        Node *next;
        Node(int d):data(d), next(NULL){}//initialization
        int getData()
        {
            return data;
        }
        ~Node()
        {
            if(next!=NULL)
            {
                delete next;
            }
        }
        friend class List;
};
class List
{
    Node *head;
    Node *tail;
    public:
        List():head(NULL), tail(NULL){}
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
            Node *n=new Node(data);
            if(head==NULL)
            {
                head=tail=n;
                return;
            }
            else
            {
                n->next=head;
                head=n;
                return;
            }
        }
        void push_back(int data)
        {
            if(head==NULL)
            {
                Node *n=new Node(data);
                head=tail=n;
                return;
            }
            else
            {
                Node *n=new Node(data);
                tail->next=n;
                tail=n;
            }
        }
        void insert(int data, int pos)
        {
            if(pos==0)
            {
                push_front(data);
                return;
            }
            Node *temp=head;
            for(int i=1; i<pos; i++)
            {
                temp=temp->next;
            }
            Node *n=new Node(data);
            n->next=temp->next;
            temp->next=n;
            return;
        }
        bool search(Node *head, int key)
        {
            Node *temp=head;
            while(temp!=NULL)
            {
                if(temp->data==key)
                return true;
                temp=temp->next;
            }
            return false;
        }
        bool recursiveSearch(Node *head, int key)
        {
            if(head==NULL)
            {
                return false;
            }
            if(head->data==key)
            {
                return true;
            }
            else
            {
                return recursiveSearch(head->next, key);
            }
        }
        int searchHelper(Node *head, int key)
        {
            if(head==NULL)
            {
                return -1;
            }
            if(head->data==key)
            {
                return 0;
            }
            int subIdx=searchHelper(head->next, key);
            
            if(subIdx==-1)
            {
                return -1;
            }
            else
                return subIdx+1;
        }
        int recursiveSearchIndex(int key)
        {
            Node *head=begin();
            return searchHelper(head, key);
        }
        void pop_front()
        {
            //cout<<"hiyy"<<endl;
            if(head==NULL)
                return;
            else
            {
                Node *temp=head;
                head=head->next;
                temp->next=NULL;
                delete temp;
            }
            //cout<<head<<endl;
            return;
        }
        void pop_back()
        {
            //cout<<"hi"<<endl;
            Node *temp=head;
            if(temp==NULL)
                return;
            while(temp->next->next!=NULL)
            {
                temp=temp->next;
            }
            Node *p=temp->next;
            temp->next=NULL;
            delete p;
        }
        void print()
        {
            //cout<<"hiuu"<<endl;
            Node *head=begin();
            while(head!=NULL)
            {
                if(head->next==NULL)
                    cout<<head->data;
                else
                    cout<<head->data<<"->";
                head=head->next;
            }
            return;
        }
        void pop(int pos)
        {
            Node *temp=head;
            if(temp==NULL)
                return;
            else{
                if(pos==0)
                {
                    pop_front();
                }
                else{
                    for(int i=1; i<pos; i++)
                    {
                        temp=temp->next;
                    }
                    Node *n=temp->next;
                    temp->next=n->next;
                    n->next=NULL;
                    delete n;
                }
            }
            return;
        }
        int alternateSearch(int key)
        {
            Node *temp=head;
            int idx=0;
            while(temp!=NULL)
            {
                if(temp->data==key)
                {
                    return idx;
                }
                idx++;
                temp=temp->next;
            }
            return -1;
        }
};