#include <bits/stdc++.h>
using namespace std;


template<typename T>
class Graph{
    map<T, list<T>> l;
public:
    void addEdge(int x, int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void bfs(T src){
        map<T, int> visited;
        queue<T> q;

        q.push(src);
        visited[src] = true;

        while (!q.empty())
        {
            /* code */
            T node = q.front();
            q.pop();
            visited[node] = true;
            cout<<node<<" "; 
            for(T nbr: l[node]){
                if(!visited[nbr]){
                    q.push(nbr);
                    visited[nbr] = true;
                }
            }
        }
        
    }
};



int main(){
    //driver
    Graph<int> g;
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.addEdge(2,5);
    g.bfs(1);
}
