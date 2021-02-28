#include <bits/stdc++.h>
using namespace std;


template<typename T>
class Graph{
    unordered_map<T,list<T>> m;
    int  V;

public:
    Graph(int v){
        this->V = v;
    }

    void addEdge(int u, int v){
        m[u].push_back(v);
        m[v].push_back(u);
    }

    void bfs(T src){
        //initilie the dist array
        vector<int> visited;
        vector<int> dist;
        queue<T> q;

        q.push(src);
        visited[src] = true;
        while(!q.empty()){
            int v = q.front();
            q.pop();
            for(int nbr: m[v]){
                if(!visited[nbr]){
                    visited[nbr] =  true;
                    q.push(nbr);
                    dist[nbr] = dist[v] + 1;
                }
            }
        } 
        for(auto d: dist){
            cout<<d<<" ";
        }
    }

};


void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/input.txt", "r", stdin);
    freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/output.txt", "w", stdout);
#endif
}

int main(){
    c_p_c();
    int q; cin>>q;
    while(q--){
        int n;  cin>>n;
        int e; cin>>e;
        Graph<int> g(n);
        while(e--){
            int u; cin>>u;
            int v; cin>>v;
            g.addEdge(u,v);
        }
        int src; cin>>src;
        g.bfs(src);
    }
}
