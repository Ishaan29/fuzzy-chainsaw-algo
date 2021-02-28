#include <bits/stdc++.h>
using namespace std;

template<typename T>
class Graph{
    int V;
    unordered_map<T,list<pair<T,int>>> m;
public:
    
    graph(int v){
        this->V = v;
        this->m = new unordered_map<T,list<pair<T,int>>>(V);
    }

    void addEdge(T u, T v, int dist){
        m[u].push_back(make_pair(v,dist));
        m[v].push_back(make_pair(u,dist));
        //cout<<u<<"  "<<v<<"added_edge at  "<<dist<<" distance";
    }
    void dijkistra(T src){
        unordered_map<T, int> dist;
        for(auto j: m){
            dist[j.first] = INT_MAX;
        }
        //by default set sorts according to the firstt parameter
        set<pair<int, T>> s;
        dist[src] = 0;

        s.insert(make_pair(0,src));

        while(!s.empty()){
            //find the pair at the frot
            auto p = *(s.begin());
            T node = p.second;
            
            int nodeDist = p.first;
            s.erase(s.begin());

            //Iterate over the nabourrs of  current node 
            for(auto childPair: m[node]){
                if(nodeDist + childPair.second < dist[childPair.first]){
                    // in set updation is not possible so we remove thee  old pair to and insert the new paiir to simullate updation
                    T dest = childPair.first;
                    auto f = s.find(make_pair(dist[dest],dest));
                    if(f != s.end()){
                        s.erase(f);
                    }
                    // insert tthe new pair
                    dist[dest] = nodeDist + childPair.second;
                    s.insert(make_pair(dist[dest], dest));
                }
            }

        }
        for(auto d: dist){
            cout<<d.second*6<<" ";
        }
        cout<<endl;
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
            g.addEdge(u,v,1);
        }
        int src; cin>>src;
        g.dijkistra(src);
    }
}



