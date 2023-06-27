#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int> bubblesort(vector<int> &v,int n)
{
    int temp;
    bool flag;
    for(int i=0; i<n-1; i++)
    {
    	flag=false;
        for(int j=0; j<(n-i-1); j++)
        {
            if(v[j]>v[j+1])
            {
                flag=true;
                temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
                cout<<"i="<<i<<" j="<<j<<endl;
            }
        } 
		if(flag==false)
		{
			cout<<"i="<<i<<endl;
			return v;
		}
    }
    return v;
}
int main()
{
    vector<int> a,v;
    
    a.push_back(1);
    a.push_back(-1);
    a.push_back(3);
    a.push_back(8);
    a.push_back(10);
    
    v=bubblesort(a,5);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
