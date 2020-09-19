#include <bits/stdc++.h>
using namespace std;

class Graph{
    unordered_map<string, list<pair<string, int>>> l;
public:
    void addEdge(string x, string y, bool isBidir, int wt){
        l[x].push_back(make_pair(y,wt));
        if(isBidir){
            l[y].push_back(make_pair(x,wt));
        }
    }
    void print_graph(){
        for(auto v: l){
            string city = v.first;
            cout<<city<<"-> ";
            for(auto nbr: v.second){
                cout<<nbr.first<<" "<<nbr.second<<","; 
            }
             cout<<endl;
        }
       
    }
};



int main(){
    Graph g;
    g.addEdge("A", "B", true, 20);
    g.addEdge("B", "D", true, 10);
    g.addEdge("A", "C", true, 10);
    g.addEdge("C", "D", true, 40);
    g.addEdge("A", "D", false, 50);
    g.print_graph();
    
}
