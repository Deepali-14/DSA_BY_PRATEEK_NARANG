//Adjacency List Representation

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class graph
{
    int v;
    list<int> *l;
    public:
        graph(int V)
        {
            v=V;
            l=new list<int>[v];
        }
        void addEdge(int i, int j, bool undir=true)
        {
            l[i].push_back(j);
            if(undir)
            {
                l[j].push_back(i);
            }
        }
        void printGraph()
        {
            for(int i=0; i<v; i++)
            {
                cout<<i<<"->";
                for(auto node : l[i])
                {
                    cout<<node<<",";
                }
                cout<<endl;
            }
        }
};
int main()
{
    graph g(6);
    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(2,1);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.addEdge(2,3);
    g.addEdge(3,5);
    g.printGraph();
    return 0;
}