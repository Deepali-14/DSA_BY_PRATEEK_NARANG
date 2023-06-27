#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<string> books;
    books.push("C++");
    books.push("Java");
    books.push("Python");
    books.push("Os");
    books.pop();
    while(!books.empty())
    {
        cout<<books.top()<<endl;
        books.pop();
    }
    return 0;
}