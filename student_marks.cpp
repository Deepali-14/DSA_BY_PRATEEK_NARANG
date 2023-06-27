//Complex vector class for sorting students marks in three subjects

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(pair<string,int> s1, pair<string,int> s2)
{
	int m1=s1.second;
	int m2=s2.second;
	return m1>m2;
}

int main()
{
//	vector<pair<string,vector<int> > > student_mark;
//	student_mark.push_back(make_pair("Rohan",student_mark.push_back(2)));
	vector<pair<string,int> > student_marks;
	student_marks.push_back(make_pair("Rohan",2));
	student_marks.push_back(make_pair("Aman",5));
	student_marks.push_back(make_pair("Kartik",3));
	sort(student_marks.begin(), student_marks.end(), compare);
	for(int i=0; i<3; i++)
	{
		cout<<student_marks[i].first<<endl;
	}
	return 0;
}
