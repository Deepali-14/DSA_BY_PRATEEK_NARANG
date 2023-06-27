//Topological ordering using BFS code
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
        void addEdge(int i, int j, bool undir=false)
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
                for(auto nbr:l[i])
                {
                    cout<<nbr<<",";
                }
                cout<<endl;
            }
        }
        void topological_sort()
        {
            vector<int> indegree(v,0);
            for(int i=0; i<v; i++)
            {
                for(auto nbr:l[i])
                {
                    indegree[nbr]++;
                }
            }
            queue<int> q;
            for(int i=0; i<v; i++)
            {
                if(indegree[i]==0)
                {
                    q.push(i);
                }
            }
            while(!q.empty())
            {
                int f=q.front();
                cout<<f<<" ";
                q.pop();
                for(auto x:l[f])
                {
                    indegree[x]--;
                    if(indegree[x]==0)
                    {
                        q.push(x);
                    }
                }
            }
        }    
};
int main()
{
    Graph g(6);
    g.addEdge(0,2);
    g.addEdge(2,3);
    g.addEdge(3,5);
    g.addEdge(4,5);
    g.addEdge(1,4);
    g.addEdge(1,2);
    g.print();
    g.topological_sort();
    return 0;
}