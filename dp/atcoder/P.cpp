#include <bits/stdc++.h>
using namespace std;
#define ll long long
//data structure to store a tree
vector<int> tree[100001];
int dp[100001][2];
#define mod 1000000007

int f(int u, int lim, int pr){

    if(dp[u][lim] != -1) return dp[u][lim];
    int ans = 0;
    int w1 = 1;
    for(int child: tree[u]){
        if(child != pr){
            w1 = (w1 * f(child, 0, u))%mod;
        }
    }
    ans += w1;
    int w2 = 1;
    if(!lim){
        for(int child: tree[u]){
            if(child != pr){
                w2 = (w2 * f(child, 1, u))%mod; 
            }
        }
    }
    ans = (ans + w2) % mod;
    return dp[u][lim] = ans;
}


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
    int n; cin>>n;
    memset(dp, -1, sizeof dp);
    for(int i = 0; i < n-1; i++){
        int u; cin>>u;
        int v; cin>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    cout<<f(1, 0, -1)<<endl;
}

