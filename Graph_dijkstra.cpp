//Dijkstra Algorithm

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
            l=new list<pair<int, int>>[v];
        }
        void addEdge(int i, int j, int wt, bool undir=true)
        {
            l[i].push_back({wt,j});
            if(undir)
            {
                l[j].push_back({wt,i});
            }
        }
        void print()
        {
            for(int i=0; i<v; i++)
            {
                cout<<i<<"->";
                for(auto x:l[i])
                {
                    cout<<x.first<<" "<<x.second<<",";
                }
                cout<<endl;
            }
        }
        int dijkstra(int src, int dest)
        {
            vector<int> dist(v,INT_MAX);
            set<pair<int, int>>s;

            dist[src]=0;
            s.insert({0,src});
            while(!s.empty())
            {
                auto it=s.begin();
                int node=it->second;
                int distTillNow=it->first;
                s.erase(it);
                for(auto nbrPair:l[node])
                {
                    int nbr=nbrPair.second;
                    int currentEdge=nbrPair.first;

                    if(distTillNow+currentEdge<dist[nbr])
                    {
                        auto f=s.find({dist[nbr], nbr});
                        if(f!=s.end())
                        {
                            s.erase(f);
                        }
                        dist[nbr]=distTillNow+currentEdge;
                        s.insert({dist[nbr],nbr});
                    }
                }
            }
            for(int i=0; i<v; i++)
            {
                cout<<"Node "<<i<<" Dist "<<dist[i]<<endl;
            }
            return dist[dest];
        }
};
int main()
{
    Graph g(5);
    g.addEdge(0,1,1);
    g.addEdge(1,2,1);
    g.addEdge(0,2,4);
    g.addEdge(0,3,7);
    g.addEdge(3,2,2);
    g.addEdge(3,4,3);
    g.print();
    cout<<g.dijkstra(0,4)<<endl;
    return 0;
}