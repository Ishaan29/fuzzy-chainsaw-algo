/* 
* NOTES:= adjancey list implementation.
          0/1 bfs for shortest path.
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> edges[10];
int distence[1001 = {0}];
void bfs(int start){
    deque<int> q;
    //insert the source at the begening.
    q.push_back(start);

    distence[start] = 0;

    while(!q.empty()){
        int v = q.front();
        q.pop_front();
        for(int i = 0; i < edges[v].size(); i++){
            if(distance[edges[v][i].first] > distance[v] + edges[v][i].second){
                distance[edges[v][i]].first = distance[v] + edges[v][i].second;

                if(edges[v][i].second == 0){
                    q.push_front(edges[v][i].first);
                }else{
                    q.push_back(edges[v][i].first);
                }
            }
        }
    }


}

int main(){
    int x,y, nodes, edges;
    cin>>nodes;
    cin>>edges;
    for(int i = 0; i < edges; ++i){
        cin>>x>>y;
        adj[x].push_back(y);
    }
    return 0;
}
