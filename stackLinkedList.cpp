//Stack using Linked List
#include<iostream>
#include<bits/stdc++.h>
#include "stack.h"
using namespace std;
int main()
{
    Stack<char> s;
    s.push('h');
    s.push('e');
    s.push('l');
    s.push('l');
    s.push('o');
    s.print();
    return 0;
}
//via linked list hence no overflow