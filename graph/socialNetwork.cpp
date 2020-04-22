#include <bits/stdc++.h>

using namespace std;

#define LIMIT 100
#define PLIMIT 10000010
#define MOD 1000000007ll
#define INF 1e9
typedef long long ll;
typedef pair<ll, ll> ii;
int gcd(ll a, ll b) { return (b==0)?a:gcd(b, a%b); }
int lcm(ll a, ll b) { ll i=(a/gcd(a,b))*b; assert(i>0); return i; }
int dx[4] = {0, 1, 0, -1}, dy[4] = {-1, 0, 1, 0};
//  ***** FUNCTION *****
int bfs(int source, int t, int vis[], vector<int> g[], int level[], int n){
    queue<int> q;
    int count = 0;
    level[source] = 0;
    vis[source] = 1;
    q.push(source);
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        for(int i = 0; i < g[curr].size(); i++){
            if(vis[g[curr][i]] == 0){
                vis[g[curr][i]] = 1;
                level[g[curr][i]] = level[curr]+1;
                if(level[g[curr][i]] == t){
                    count++;
                }
                q.push(g[curr][i]);
            }
        }
    }
    return count;
}

//  ***** MAIN *****
int main(){
  //ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n,e;
  cin>>n>>e;
  vector<int> g[n+1];
  for(int i = 0; i< e; ++i){
      int u,v; cin>>u>>v;
      g[u].push_back(v);
      g[v].push_back(u);
  }
  int m; cin>>m;
  while(m--){
      int s,t; cin>>s>>t;
      int level[n+1] = {0};
      int vis[n+1] = {0};
      int count = bfs(s,t,vis,g,level, n);

      cout<<count<<endl;
  }

  return 0;
}
