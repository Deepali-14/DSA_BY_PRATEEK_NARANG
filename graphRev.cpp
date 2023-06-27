#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// class Node
// {
//     public:
//         string name;
//         list<string> nbrs;
//         Node(string name)
//         {
//             this->name=name;
//         }
// };
// class graph
// {
//     unordered_map<string, Node*> m;
//     public:
//         graph(vector<string> cities)
//         {
//             for(auto x: cities)
//             {
//                 m[x]=new Node(x);
//             }
//         }
//         void AddEdge(string x, string y, bool undir=true)
//         {
//             m[x]->nbrs.push_back(y);
//             if(undir)
//             {
//                 m[y]->nbrs.push_back(x);
//             }
//         }
//         void printAdjList()
//         {
//             for(auto x:m)
//             {
//                 auto nbr=x.first;
//                 cout<<nbr<<"--->";
//                 Node *nbrl=x.second;
//                 for(auto x:nbrl->nbrs)
//                 {
//                     cout<<x<<" ";
//                 }
//                 cout<<endl;
//             }
//         }
// };
class Graph
{
    int v;
    list<pair<int, int>> *l;
    public:
        Graph(int v)
        {
            this->v=v;
            l=new list<pair<int, int>> [v];
        }
        void addEdge(int i, int j, int wt, bool undir=true)
        {
            l[i].push_back({j,wt});
            if(undir)
            {
                l[j].push_back({i,wt});
            }
        }
        void printAdjList()
        {
            for(int i=0; i<v; i++)
            {
                cout<<i<<"--->";
                for(auto x: l[i])
                {
                    cout<<x.first<<" "<<x.second<<"\t";
                }
                cout<<endl;
            }
        }
        // void bfs(int source)
        // {
        //     queue<int> q;
        //     q.push(source);
        //     bool *visited=new bool[v]{0};
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
        // }
        // void topological_sort()
        // {
        //     cout<<"hi"<<endl;
        //     vector<int> indegree(v,0);
        //     for(int i=0; i<v; i++)
        //     {
        //         for(auto x:l[i])
        //         {
        //             indegree[x]++;
        //         }
        //     }
        //     queue<int> q;
        //     for(int i=0; i<v; i++)
        //     {
        //         //cout<<"hi"<<endl;
        //         if(indegree[i]==0)
        //         {
        //             cout<<"hi"<<endl;
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
            vector<int> dist(v,INT_MAX);
            set<pair<int, int>> s;
            dist[src]=0;
            s.insert({src, 0});
            
            while(!s.empty())
            {
                auto it=s.begin();
                int node=it->first;
                int distTillNow=it->second;
                s.erase(it);
                for(auto nbrPair: l[node])
                {
                    int nbr=nbrPair.first;
                    int currentEdge=nbrPair.second;
                    if(currentEdge+distTillNow<dist[nbr])
                    {
                        auto f=s.find({nbr, dist[nbr]});
                        if(f!=s.end())
                        {
                            s.erase(f);
                        }
                        dist[nbr]=currentEdge+distTillNow;
                        s.insert({nbr, dist[nbr]});
                    }
                }
            }
            for(int i=0; i<v; i++)
            {
                cout<<i<<"->"<<dist[i]<<endl;
            }
            return dist[dest];
        }
        // void dfsHelper(int src, bool * visited)
        // {
        //     cout<<src<<" ";
        //     visited[src]=true;
        //     for(auto x:l[src])
        //     {
        //         if(!visited[x])
        //         {
        //             dfsHelper(x, visited);
        //         }
        //     }
        // }
        // void dfs(int source)
        // {
        //     bool *visited=new bool[v]{0};
        //     dfsHelper(source, visited);
        // }
};
int main()
{
    // vector<string> cities={"Delhi", "London", "Paris", "New York"};
    // graph g(cities);
    // g.AddEdge("Delhi","London");
    // g.AddEdge("New York","London");
    // g.AddEdge("Delhi","Paris");
    // g.AddEdge("Paris","New York");
    // g.printAdjList();
    // return 0;
    // Graph g(6);
    // g.AddEdge(0,1);
    // g.AddEdge(0,4);
    // g.AddEdge(2,1);
    // g.AddEdge(3,4);
    // g.AddEdge(4,5);
    // g.AddEdge(2,3);
    // g.AddEdge(3,5);
    // g.printAdjList();
    // Graph g(6);
    // g.AddEdge(0,2);
    // g.AddEdge(2,3);
    // g.AddEdge(3,5);
    // g.AddEdge(4,5);
    // g.AddEdge(1,4);
    // g.AddEdge(1,2);
    // g.printAdjList();
    // g.topological_sort();
    // return 0;
    // Graph g(7);
    // g.addEdge(0,1);
    // g.addEdge(1,2);
    // g.addEdge(2,3);
    // g.addEdge(3,5);
    // g.addEdge(5,6);
    // g.addEdge(4,5);
    // g.addEdge(0,4);
    // g.addEdge(3,4);
    // g.printAdjList();
    // g.dfs(1);
    Graph g(5);
    g.addEdge(0,1,1);
    g.addEdge(1,2,1);
    g.addEdge(0,2,4);
    g.addEdge(0,3,7);
    g.addEdge(3,2,2);
    g.addEdge(3,4,3);
    g.printAdjList();
    cout<<g.dijkstra(0,4)<<endl;
    return 0;
    return 0;
}