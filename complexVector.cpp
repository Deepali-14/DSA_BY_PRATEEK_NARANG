#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int calTotalMarks(vector<int> marks)
{
	return marks[0]+marks[1]+marks[2]+marks[3];
}
bool compare(pair<string, vector<int> > s1, pair<string, vector<int> > s2)
{
	vector<int> m1=s1.second;
	vector<int> m2=s2.second;
	return calTotalMarks(m1)>calTotalMarks(m2);
}
int main()
{
	vector<pair<string, vector<int>>> student={
	{"Rahul",{100,99,88,78}},
	{"Vijay",{100,44,99,66}},
	{"Ajay",{88,99,77,78}},
	{"Mohit",{78,89,80,76}},
	{"Nagaraj",{100,99,99,99}}
	};
	
	sort(student.begin(), student.end(), compare);
	
	for(auto s:student)
	{
		cout<<s.first<<" "<<calTotalMarks(s.second)<<endl;
	}
	return 0;
}

