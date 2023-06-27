// To get all the binary strings possible with a given bit



#include <bits/stdc++.h>
using namespace std;

string convert_binary(int i, int n)
{
    string temp;
    while(i!=0)
	{
        int rem = i%2;
        //cout<<"rem="<<rem<<endl;
        char ch = rem + '0';
        //cout<<"ch="<<ch<<endl;
        temp.append(1,ch);
        //cout<<"temp"<<temp<<endl;
        i/=2;
    }
    if(temp.size() < n)
	{
        temp.append(n-temp.size(),'0');
    }
    reverse(temp.begin(),temp.end());
    return temp;
}



bool isValid(string str)
{
    for(int i=0 ; i<str.size()-1 ; i++)
	{
        if(str[i] == '1' and str[i] == str[i+1])
		{
            return false;
        }
    }
    return true;
}


vector<string> binaryStrings(int n)
{
    vector<string> ans;
    // Brute Force
    int N = pow(2,n);
    for(int i=0 ; i<N; i++)
	{
        string str =convert_binary(i,n);
        if(isValid(str))
		{
            ans.push_back(str);
        }
    }
    return ans;
}
int main()
{
	cout<<"Enter the number of bits in the string : ";
	int n;
	cin>>n;
	vector<string>res=binaryStrings(n);
	for(int i=0; i<res.size(); i++)
	{
		cout<<res[i]<<endl;
	}
	return 0;
}
