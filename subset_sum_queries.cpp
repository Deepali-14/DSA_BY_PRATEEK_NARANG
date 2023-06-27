//Subset Sum Queries
//Given an array and N number of queries, where in each query you have to check whether a subset whose sum is equal to given number exists in the array or not.
//
//Input Format
//In the function two vectors num and query are passed.
//
//Output Format
//Return a bool vector of size N representing each query.
//
//Sample Input
//num[]   = {1, 2, 3}
//query[] = {5, 3, 8} 
//
//Sample Output
//{Yes, Yes, No}
//
//Explanation
//There is a subset with sum 5, subset is {2, 3}
//There is a subset with sum 3, subset is {1, 2}
//There is no subset with sum 8.




#include<bits/stdc++.h>
using namespace std;

vector<bool> subsetSum(vector<int> num, vector<int> query)
{
    int N = query.size();
    int n = num.size();
    int tot=1<<n;
    vector<int> v;
    vector<bool> vv;
    for(int mask=0; mask<tot; mask++)
    {
    	int sum=0;
    	for(int i=0; i<n; i++)
    	{
    		int f=1<<i;
    		if((mask&f)!=0)
    		{
    			sum+=num[i];
			}
		}
		v.push_back(sum);
	}
	cout<<"Print the v vector : "<<endl;
	for(int i=0; i<v.size(); i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	int j=0;
	vector<int>::iterator it;
	while(j<N)
	{
		it = find(v.begin(), v.end(), query[j]);
    	if(it != v.end())
    	{
    		vv.push_back(true);
		}
    	else
    	{
    		vv.push_back(false);
		}
        	
		j++;
	}
	return vv;
}


int main()
{
	int m,n,x;
	vector<int> num,query;
	cout<<"Enter the size of num vector : ";
	cin>>m;
	cout<<"Enter the size of query vector : ";
	cin>>n;
	cout<<"Enter the num vector elements : "<<endl;
	for(int i=0; i<m; i++)
	{
		cin>>x;
		num.push_back(x);
	}
	cout<<"Enter the query vector elements : "<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>x;
		query.push_back(x);
	}
	cout<<"Print the num vector : "<<endl;
	for(int i=0; i<m; i++)
	{
		cout<<num[i]<<" ";
	}
	cout<<endl;
	cout<<"Print the query vector : "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<query[i]<<" ";
	}
	cout<<endl;
	vector<bool>res=subsetSum(num,query);
	cout<<"Print the result vector : "<<endl;
	for(int i=0; i<res.size(); i++)
	{
		cout<<res[i]<<" ";
	}
	return 0;
}
