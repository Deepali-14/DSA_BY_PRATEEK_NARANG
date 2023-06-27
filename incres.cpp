// To print the elements in increasing order starting from 0 upto given range



#include<bits/stdc++.h>
using namespace std;
vector<int> v;
void helper(vector<int> &v,int N, int i)
{
	if(i==N+1)
	{
		return;
	}
	v.push_back(i);
	helper(v, N, i+1);
}
vector<int> increasingNumbers(int N) {
	vector<int> v;
	v.clear();
    helper(v, N, 1);
    return v;
}
int main()
{
	int n;
	
	cout<<"Enter the range:";
	cin>>n;
	
	vector<int>res=increasingNumbers(n);
	cout<<"The resulting vector is "<<endl;
	for(int i=0; i<res.size(); i++)
		cout<<res[i]<<" ";
	cout<<endl;
	return 0;
}
