#include <bits/stdc++.h>
using namespace std;

int f(vector<int> S, int m, int n){
   int table[n+1]; 
  
    // Initialize all table values as 0 
    memset(table, 0, sizeof(table)); 
  
    // Base case (If given value is 0) 
    table[0] = 1; 
  
    // Pick all coins one by one and update the table[] values 
    // after the index greater than or equal to the value of the 
    // picked coin 
    for(int i=0; i<m; i++) 
        for(int j=S[i]; j<=n; j++) 
            table[j] += table[j-S[i]]; 
  
    return table[n]; 
}


void solve(){
    int n; cin>>n;
    vector<int> coins(n);
    for(int& c: coins) cin>>c;
    int amt; cin>>amt;
    cout<<f(coins, n, amt)<<endl;;
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
    int t; cin>>t;
    while(t--){
        solve();
    }
}

