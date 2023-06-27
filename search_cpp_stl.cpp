#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//bool pred(int i, int j)
//{
//    if (i > j) {
//        return 1;
//    } else {
//        return 0;
//    }
//}
int main()
{
	vector<int> v;
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	vector<int> v1;
	v1.push_back(2);
	v1.push_back(3);
	vector<int>::iterator it=search(v.begin(), v.end(), v1.begin(), v1.end());
	if(it!=v.end())
		cout<<"Subsequence found at : "<<it-v.begin()<<endl;
	else
		cout<<" Subsequence not found"<<endl;
	
	return 0;
}
