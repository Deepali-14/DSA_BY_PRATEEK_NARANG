#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int> >vv;
class Node
{
	public:
		int data;
		Node * left;
		Node * right;
		Node(int d)
		{
			data=d;
			left=right=NULL;
		}
};

class HDPair
{
	public:
		int height;
		int diameter;
};

void printLevelorder(Node *root)
{
	queue<Node *>q;
	q.push(root);
	q.push(NULL);
	while(!q.empty())
	{
		Node *temp=q.front();
		if(temp==NULL)
		{
			cout<<endl;
			q.pop();
			if(!q.empty())
			{
				q.push(NULL);
			}
		}
		else
		{
			q.pop();
			cout<<temp->data<<" ";
			if(temp->left)
			{
				q.push(temp->left);
			}
			if(temp->right)
			{
				q.push(temp->right);
			}
		}
	}
	return;
}

Node *buildTree()
{
	int d;
	cout<<"Enter data to insert in binary tree : ";
	cin>>d;
	if(d==-1)
	{
		return NULL;
	}
	Node *n=new Node(d);
	n->left=buildTree();
	n->right=buildTree();
	return n;
}

void printPreorder(Node *root)
{
	if(root==NULL)
	{
		return;
	}
	cout<<" "<<root->data<" ";
	printPreorder(root->left);
	printPreorder(root->right);
}

void printInorder(Node *root)
{
	if(root==NULL)
	{
		return;
	}
	printInorder(root->left);
	cout<<root->data<<" ";
	printInorder(root->right);
}

void printPostorder(Node *root)
{
	if(root==NULL)
	{
		return;
	}
	printPostorder(root->left);
	printPostorder(root->right);
	cout<<root->data<<" ";
}

Node * levelOrderBuild()
{
	int d;
	cout<<"Enter data to build binary tree using level order traversal : ";
	cin>>d;
	Node *root=new Node(d);
	queue<Node *>q;
	q.push(root);
	while(!q.empty())
	{
		Node *current=q.front();
		q.pop();
		int c1,c2;
		cout<<"Enter the children : ";
		cin>>c1>>c2;
		if(c1!=-1)
		{
			current->left=new Node(c1);
			q.push(current->left);
		}
		if(c2!=-1)
		{
			current->right=new Node(c2);
			q.push(current->right);
		}
	}
	return root;
}

int height(Node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	int h1=height(root->left);
	int h2=height(root->right);
	return 1+max(h1,h2);
}

vector<int> printKthLevel(Node *root, int k)
{
	queue<Node *>q;
	q.push(root);
	vector<int>s;
	int level=0;
	int flag=0;
	while(!q.empty())
	{
		int size=q.size();
		while(size--)
		{
			Node *p=q.front();
			q.pop();
			if(level==k)
			{
				flag=1;
				s.push_back(p->data);
			}
			else
			{
				if(p->left)
				q.push(p->left);
				if(p->right)
				q.push(p->right);
			}
		}
		level++;
		if(flag==1)
		{
			break;
		}
	}
	return s;
}

int sumBT(Node *root)
{
	int count=0;
	queue<Node *>q;
	q.push(root);
	while(!q.empty())
	{
		Node *temp=q.front();
		q.pop();
		if(temp->left)
		q.push(temp->left);
		if(temp->right)
		q.push(temp->right);
		count=count+temp->data;
	}
	return count;
}

int diameter1(Node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	int d1=height(root->left)+height(root->right);
	int d2=diameter1(root->left);
	int d3=diameter1(root->right);
	return max(d1, max(d2, d3));
}

HDPair diameter2(Node *root)
{
	HDPair p;
	if(root==NULL)
	{
		p.height=p.diameter=0;
		return p;
	}
	HDPair left=diameter2(root->left);
	HDPair right=diameter2(root->right);
	p.height=max(left.height, right.height)+1;
	int d1=left.height+right.height;
	int d2=left.diameter;
	int d3=right.diameter;
	p.diameter=max(d1, max(d2, d3));
//	cout<<"Diameter of given binary tree with O(n) time commplexity is "<<p<<endl;
	return p;
}

int minDepth(Node *root)
{
	int res=INT_MAX;
	queue<pair<Node *, int> >q;
	int d=1;
	q.push({root,d});
	while(!q.empty())
	{
		Node *f=q.front().first;
		d=1+q.front().second;
		if(f->left==NULL && f->right==NULL)
		{
			res=min(res, q.front().second);
		}
		q.pop();
		if(f->left)
		q.push({f->left,d});
		if(f->right)
		q.push({f->right,d});
	}
	return res;
}

bool isSymmetric(Node *root)
{
	queue<Node *>q1;
	queue<Node *>q2;
	if(root==NULL)
	return true;
	else if(root->left==NULL && root->right==NULL)
	{
		return true;
	}
	else if(root->left==NULL || root->right==NULL)
	{
		return false;
	}
	else
	{
		q1.push(root->left);
		q2.push(root->right);
		while(!q1.empty() && !q2.empty())
		{
			Node *f1=q1.front();
			q1.pop();
			Node *f2=q2.front();
			q2.pop();
			if(f1->left==NULL && f2->right!=NULL)
			return false;
			if(f1->left!=NULL && f2->right==NULL)
			return false;
			if(f1->data!=f2->data)
			return false;
			if(f1->left)
			q1.push(f1->left);
			if(f1->right)
			q1.push(f1->right);
			if(f2->right)
			q2.push(f2->right);
			if(f2->left)
			q2.push(f2->left);
		}
	}
	if(q1.empty() && q2.empty())
	return true;
	return false;
}

void inorder1(Node *root, vector<int> &v)
{
	if(root==NULL)
	return;
	if(root->left)
	inorder1(root->left, v);
	v.push_back(root->data);
	if(root->right)
	inorder1(root->right,v);
}

Node *help(Node *root)
{
	if(root==NULL)
	return NULL;
	if(root->right)
	root->right=help(root->right);
	if(root->left)
	root->left=help(root->left);
	if((root->left!=NULL && root->right==NULL) || (root->left==NULL && root->right!=NULL))
	{
		if(root->left)
		root=root->left;
		else
		root=root->right;
		root=help(root);
	}
	return root;
}

vector<int> removeHalfNodes(Node *root)
{
	root=help(root);
	vector<int> v;
	inorder1(root, v);
	return v;
}
 void help2(Node *root, int a, vector<int>&v, int b)
 {
 	if(root==NULL)
 	return;
 	if(root->left==NULL || root->right==NULL)
 	{
 		if(a==b+root->data)
 		{
 			v.push_back(root->data);
 			vv.push_back(v);
 			v.pop_back();
		}
		return;
	}
	if(root->left)
	{
		v.push_back(root->data);
		help2(root->left, a, v, b+root->data);
		v.pop_back();
	}
	if(root->right)
	{
		v.push_back(root->data);
		help2(root->right, a, v, b+root->data);
		v.pop_back();
	}
 }
 
vector<vector<int> >pathSum(Node *root, int targetSum)
{
	vv.clear();
	vector<int> v;
	help2(root, targetSum, v, 0);
	return vv;
}
//1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1 -Asymmteric 
//1 2 3 -1 -1 4 -1 -1 2 4 -1 -1 3 -1 -1 -Symmteric
//2 7 -1 6 1 -1 -1 11 -1 -1 5 -1 9 4 -1 -1 -1-half nodes
int main()
{
	Node *root=buildTree();
	
	cout<<"Preorder traversal : "<<endl;
	printPreorder(root);
	cout<<endl;
	
	cout<<"Inorder traversal : "<<endl;
	printInorder(root);
	cout<<endl;
	
	cout<<"Postorder traversal : "<<endl;
	printPostorder(root);
	cout<<endl;
	cout<<"Levelorder traversal : "<<endl;
	printLevelorder(root);
	cout<<endl;
	
	
	root=levelOrderBuild();
	
	
	cout<<"Preorder traversal : "<<endl;
	printPreorder(root);
	cout<<endl;
	
	cout<<"Inorder traversal : "<<endl;
	printInorder(root);
	cout<<endl;
	
	cout<<"Postorder traversal : "<<endl;
	printPostorder(root);
	cout<<endl;
	
	cout<<"Levelorder traversal : "<<endl;
	printLevelorder(root);
	cout<<endl;
	
	cout<<"Height of the entered binary tree is "<<height(root)<<endl;
	
	cout<<"Enter level to find : ";
	int key;
	cin>>key;
	vector<int> v=printKthLevel(root, key);
	cout<<"Elements at "<<key<<"th level is "<<endl;
	for(int i=0; i<v.size(); i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	
	cout<<"Sum of nodes of given binary tree is "<<sumBT(root)<<endl;
	
	cout<<endl;
	
	cout<<"Diameter of given binary tree with O(n^2) time commplexity is "<<diameter1(root)<<endl;
	
	cout<<endl;
	
	HDPair p=diameter2(root);
	
	//?cout<<"Diameter of given binary tree with O(n) time commplexity is "<<p<<endl;
	cout<<"Minimum depth of the given binary tree is "<<minDepth(root)<<endl;
	
	if(isSymmetric(root))
		cout<<"The given binary tree is symmetric"<<endl;
	else
		cout<<"The given binary tree is not symmetric"<<endl;
		
	vector<int> v1=removeHalfNodes(root);
	cout<<"Inorder traversal after removing half nodes that is a node having only one child"<<endl;
	for(int i=0; i<v1.size(); i++)
	{
		cout<<v1[i]<<" ";
	}
	cout<<endl;
	
	int k;
	cout<<"Enter the target sum you want to find path of : ";
	cin>>k;
	
	vector<vector<int> >v2=pathSum(root, k);
	cout<<"Path is -> "<<endl;
	for(int i=0; i<v2.size(); i++)
	{
		for(int j=0; j<v2[i].size(); j++)
		{
			cout<<v2[i][j]<<" ";
		}
	}
	cout<<endl;
}
