#include <bits/stdc++.h>
using namespace std;

class Graph{
    public:
        int V;
        list<int> *l;

    Graph(int V){
        this->V = V;
        l = new list<int>[V]; 
    }
    void addEdge(int x, int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void print_graph(){
        for(int i = 0; i < V; i++){
            cout<<"Vertex "<< i<<" -> ";
            for(auto e: l[i]){
                cout<<e<<", ";
            }
            cout<<endl;
        }
    }
};

int main(){
    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(2,3);
    g.addEdge(1,2);
    g.print_graph();
}
