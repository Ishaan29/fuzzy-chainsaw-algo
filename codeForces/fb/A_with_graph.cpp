/**
 * Author: Ishaan Bajpai
**/
#include <bits/stdc++.h>
#include <list>
using namespace std;

class Graph {
    int V;
    list<int> adj;
public:
    Graph(int V){
         this->V = V;
         this->adj = new list<int>[V];
    }
    void addEdge(int v, int w){
        adj[v].push_back(w);
    }

    bool isReachable(int s, int d){
        if(s == d){
            return true;
        }

        bool *visited = new bool[V];
        for(int i = 0; i < V; i++){
            visited[i] = false;
        }

        list<int> queue;

        visited[s] = true;
        queue.push_back(s);

        list<int>::iterator it;

        while(!queue.empty()){
            s = queue.front();
            queue.pop_front();

            for(it = adj[s].begin(); it != adj[s].end(); ++it){
                if(*it == d){
                    return true;
                }
                if(!visited[*it]){
                    visited[*it] = true;
                    queue.pop_back(*it);
                }
            }
        }
        return false;
    }
   
}





void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/input.txt", "r", stdin);
    freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/output.txt", "w", stdout);
#endif
}

void solve(){
    int n; cin>>n;
    vector<char> in;
    vector<char> out;
    for(int i = 0; i < n; i++){
        char ch; cin>>ch;
        in.push_back(ch);
    }
    for(int i = 0; i < n; i++){
        char ch; cin>>ch;
        out.push_back(ch);
    }
    Graph g(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; i < n; j++){
            if(out[i] == 'Y' && in[i] == 'Y'){
                g.addEdge(i,j);
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(g.isReachable(i , j)){
                cout<<"Y";
            }else{
                cout<<"N";
            }
        }
        cout<<"\n";
    }
   

}

int main() {
    c_p_c();
    int t; cin>>t;
    for(int i = 1; i <= t; i++){
        cout<<"Case #"<<i<<":"<<endl;
        solve();
    }

}
