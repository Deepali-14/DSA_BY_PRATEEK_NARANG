#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Graph
{
    int v;
    list<pair<int, int>> *l;
    public:
        Graph(int v)
        {
            this->v=v;
            //agr 0
            //l=new list<int> [v];
            //agr 1
            //l=new list<int> [v+1];
            l=new list<pair<int, int>>[v];
        }
        void AddEdge(int i, int j, int wt, bool undir=true)
        {
            cout<<i<<" "<<j<<endl;
            l[i].push_back({j,wt});
            if(undir)
            {
                l[j].push_back({i,wt});
            }
        }
        void printAdjList()
        {
            cout<<"Hi"<<endl;
            //for(int i=0; i<v; i++)//Agr 0 se shuru nodes
            for(int i=0; i<v; i++)//Agr 1 se shuru nodes
            {
                cout<<i<<"->";
                for(auto x: l[i])
                {
                    cout<<"Node="<<x.first<<" "<<"Distance="<<x.second<<"\t";
                }
                cout<<endl;
            }
        }
        // void bfs(int source)
        // {
        //     queue<int> q;
        //     //agr 2
        //     //bool *visited=new bool[v]{0};
        //     //agr 1
        //     bool *visited=new bool[v+1]{0};
        //     q.push(source);
        //     visited[source]=true;
        //     while(!q.empty())
        //     {
        //         int f=q.front();
        //         cout<<f<<" ";
        //         q.pop();
        //         for(auto x:l[f])
        //         {
        //             if(!visited[x])
        //             {
        //                 q.push(x);
        //                 visited[x]=true;
        //             }
        //         }
        //     }
        //      cout<<endl;
        // }
        // void dfsHelper(int source, bool *visited)
        // {
        //     cout<<source<<" ";
        //     visited[source]=true;
        //     for(auto x:l[source])
        //     {
        //         if(!visited[x])
        //         {
        //             dfsHelper(x,visited);
        //         }
        //     }
        // }
        // void dfs(int source)
        // {
        //     bool *visited=new bool[v+1]{0};
        //     dfsHelper(source, visited);
        // }
        // void topological_sort()
        // {
        //     vector<int> indegree(v+1,0);
        //     //for node 1
        //     //for(int i=1; i<=v; i++)
        //     //for node 0
        //     for(int i=0; i<v; i++)
        //     {
        //         for(auto x:l[i])
        //         {
        //             indegree[x]++;
        //         }
        //     }
        //     queue<int> q;
        //     //for node 1
        //     //for(int i=1; i<=v; i++)
        //     //for node 0
        //     for(int i=0; i<v; i++)
        //     {
        //         if(indegree[i]==0)
        //         {
        //             q.push(i);
        //         }
        //     }
        //     while(!q.empty())
        //     {
        //         int f=q.front();
        //         cout<<f<<" ";
        //         q.pop();
        //         for(auto x: l[f])
        //         {
        //             indegree[x]--;
        //             if(indegree[x]==0)
        //             {
        //                 q.push(x);
        //             }
        //         }
        //     }
        // }
        int dijkstra(int src, int dest)
        {
            vector<int> dist(v, INT_MAX);
            set<pair<int, int>> s;
            dist[src]=0;
            s.insert({src,0});
            while(!s.empty())
            {
                auto it=s.begin();
                int node=it->first;
                int distTillNow=it->second;
                s.erase(it);
                for(auto nbrPair:l[node])
                {
                    int nbr=nbrPair.first;
                    int currentEdge=nbrPair.second;
                    if(distTillNow+currentEdge<dist[nbr])
                    {
                        auto f=s.find({nbr, dist[nbr]});
                        if(f!=s.end())
                        {
                            s.erase(f);
                        }
                        dist[nbr]=currentEdge+distTillNow;
                        s.insert({nbr,dist[nbr]});
                    }
                }
            }
            for(int i=0; i<v; i++)
            {
                cout<<i<<"->";
                cout<<dist[i]<<" ";
                cout<<endl;
            }
            return dist[dest];
        }
};
int main()
{
    // Graph g(11);
    // g.AddEdge(1,8);
    // g.AddEdge(1,5);
    // g.AddEdge(1,2);
    // g.AddEdge(2,9);
    // g.AddEdge(6,10);
    // g.AddEdge(6,7);
    // g.AddEdge(8,6);
    // g.AddEdge(8,4);
    // g.AddEdge(8,3);
    // g.printAdjList();
    // g.bfs(1);
    // Graph g(6);
    // g.AddEdge(5,2);
    // g.AddEdge(5,0);
    // g.AddEdge(4,0);
    // g.AddEdge(4,1);
    // g.AddEdge(2,3);
    // g.AddEdge(3,1);
    // g.printAdjList();
    // //g.dfs(1);
    // g.topological_sort();
    Graph g(9);
    g.AddEdge(0,1,4);
    g.AddEdge(0,7,8);
    g.AddEdge(1,7,11);
    g.AddEdge(1,2,8);
    g.AddEdge(7,8,7);
    g.AddEdge(7,6,1);
    g.AddEdge(2,8,2);
    g.AddEdge(8,6,6);
    g.AddEdge(6,5,2);
    g.AddEdge(2,5,4);
    g.AddEdge(2,3,7);
    g.AddEdge(3,5,14);
    g.AddEdge(3,4,9);
    g.AddEdge(5,4,10);
    g.printAdjList();
    cout<<g.dijkstra(0,7)<<endl;
    return 0;
}