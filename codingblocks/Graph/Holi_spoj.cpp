#include <bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<pair<int, int>> *l;

public:
    Graph(int v){
        V = v;
        l = new list<pair<int, int>>[V];
    }
    void addEdge(int x, int y, int w){
        l[x].push_back({y,w});
        l[y].push_back({x,w});
    }
    int dfs_helper(int node, bool* vis, int* cnt; int &ans){
        //perform dfs
        vis[node] =  true;
        cnt[node] = 1;
        for(auto nbr_pair: l[node]){
            int nbr = nbr_pair.first;
            int wt = nbr_pair.second;
            if(!vis[nbr]){
                cnt[node] += dfs_helper(nbr,vis,cnt,ans);
                int nx = cnt[nbr];
                int ny  = V - nx;
                ans = 2 * min(nx,ny) * wt;
            }
        }
        return cnt[node];
    }
    int dfs(){
        bool* vis = new bool[V];
        int *cnt = new int[V];

        for(int i = 0; i < V; i++){
            vis[i] = false;
        }
        int ans =  0;
        dfs_helper(0, vis, cnt, ans);
        return ans;
    }
};


int main(){

}
