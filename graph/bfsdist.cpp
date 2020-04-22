#include<bits/stdc++.h>
using namespace std;

bool visited[100001];
int dist[100001];
vector<int> edges[100001];

void bfs(){
    queue<int> q;
    dist[1] = 0;
    q.push(1);
    
    while(!q.empty()){
        int top = q.front();
        q.pop();
        
        for(int i=0;i<edges[top].size();i++){
            
            int u = edges[top][i];
            
            if(!visited[u]){
                visited[u] = true;
                dist[u] = dist[top] + 1;
                q.push(u);
            }
        }
    }
    
}

int main(){
    int t,m,n,x,y;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i = 1; i<= n; ++i){
            visited[i] = false; 
            edges[i].clear();
            dist[i] = 0;
            
        }
        for(int i = 0; i < m; ++i){
            cin>>x>>y;
            edges[x].push_back(y);
            edges[y].push_back(x);
        }
        bfs();
        cout<<dist[n]<<"\n";
    }
    return 0;
}
