//Code to perform binary search using recursion



#include <bits/stdc++.h>
using namespace std;
 
 
void read(int a[], int n)
{
	cout<<"\n Reading Array : "<<endl;
	for(int i=0; i<n; i++)
		cin>>a[i];
}

void print(int a[], int n)
{
	for(int i=0; i<n; i++)
		cout<<" "<<a[i]<<"\t";
	cout<<endl;
}


int helper(int v[], int s, int e, int x)
{
    if(s<=e)
    {
        int m=(s+e)/2;
        if(x==v[m])
        {
            return m;
        }
        else if(x>v[m])
        {
            return helper(v, m+1, e, x);
        }
        else
            return helper(v, s, m-1, x);
    }
    return -1;
}
int binarySearch(int v[], int x, int n)
{
	int s=0;
    int e=n-1;
    int a=helper(v, s, e, x);
    return a;
}




int main()
{
	int n;
	
	cout<<"Enter n : ";
	cin>>n;
	
	int* a=new int [n];
	
	read(a,n);
	
	print(a,n);
	
	int key;
	
	cout<<"Enter key to search : ";
	
	cin>>key;
	
	int res=binarySearch(a,key,n);
	
	if(res==-1)
	{
		cout<<key<<" is not found";
	}
	
	else
	{
		cout<<key<<" is found at index "<<res<<endl;
	}
	
	return 0;
}
