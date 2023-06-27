//Breadth First Search traversal

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Graph
{
    int v;
    list<int> *l;
    public:
        Graph(int v)
        {
            this->v=v;
            l=new list<int> [v];
        }
        void addEdge(int i, int j, bool undir=true)
        {
            l[i].push_back(j);
            if(undir)
            {
                l[j].push_back(i);
            }
        }
        void print()
        {
            for(int i=0; i<v; i++)
            {
                cout<<i<<"->";
                for(auto x:l[i])
                {
                    cout<<x<<",";
                }
                cout<<endl;
            }
        }
        void bfs(int source)
        {
            queue<int> q;
            bool *visited=new bool[v]{0};
            q.push(source);
            visited[source]=true;
            while(!q.empty())
            {
                int f=q.front();
                cout<<f<<" ";
                q.pop();
                for(auto nbr:l[f])
                {
                    if(!visited[nbr])
                    {
                        q.push(nbr);
                        visited[nbr]=true;
                    }
                }
            }
        }
};


int main()
{
    Graph g(7);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,5);
    g.addEdge(5,6);
    g.addEdge(4,5);
    g.addEdge(0,4);
    g.addEdge(3,4);
    g.print();
    g.bfs(1);
    return 0;
}