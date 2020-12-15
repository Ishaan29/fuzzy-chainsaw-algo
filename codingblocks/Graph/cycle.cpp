#include<bits/stdc++.h>
using namespace std;


template<typename T>
class Graph{
    int V;
    map<T, list<T>> l;
public:
    void addEdge(){

    }
    bool dfs_helper(int node, bool *visited, int parent){
        visited[node] = true;
        for(auto nbr: l[node]){
            if(!visited[nbr]){
                bool hasCycle = dfs_helper(nbr, visited,node);
                if(hasCycle){
                    return true;
                }
            }else if(nbr != parent){
                return true;
            }
        }
        return false;
    }
    bool dfs(){
        bool *visited = new bool[V];
        for(int i =0; i  < V; i++){
            visited[i] = false; 
        }
        return dfs_helper(0,visited,-1);
    }
}
int main (){

}
