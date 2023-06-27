//Adjacency List Representation using Node Class

#include<iostream>
#include<list>
#include<vector>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        string name;
        list<string> nbrs;
        Node(string name)
        {
            this->name=name;
        }
};
class graph
{
    unordered_map<string, Node *> m;
    public:
        graph(vector<string> cities)
        {
            for(auto city : cities)
            {
                m[city]=new Node(city);
            }
            return;
        }
        void AddEdge(string x, string y, bool undir=false)
        {
            m[x]->nbrs.push_back(y);
            if(undir)
            {
                m[y]->nbrs.push_back(x);
            }
            return;
        }
        void printAdjList()
        {
            for(auto cityPair : m)
            {
                auto city=cityPair.first;
                Node *node=cityPair.second;
                cout<<city<<"--->";
                for(auto nbr:node->nbrs)
                {
                    cout<<nbr<<",";
                }
                cout<<endl;
            }
            return;
        }
};
int main()
{
    vector<string> cities={"Delhi", "London", "Paris", "New York"};
    graph g(cities);
    g.AddEdge("Delhi","London");
    g.AddEdge("New York","London");
    g.AddEdge("Delhi","Paris");
    g.AddEdge("Paris","New York");
    g.printAdjList();
    return 0;
}