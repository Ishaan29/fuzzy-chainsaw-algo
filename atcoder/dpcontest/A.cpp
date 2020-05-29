#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9 + 5;
int main(){
    int n; cin>>n;
    vector<int> h(n);
    for(int i = 0; i<n; i++){
        cin>>h[i];
    }
    vector<int> dp(n ,INF);
    dp[0] = 0;
    for(int i = 0; i< n; i++){
        for(int j: {i+1,i+2}){
            if(j < n){
                dp[j] = min(dp[j], dp[i] + abs(h[i] - h[j]));
            }
        }
    }
    cout<<dp[n-1];
    
}
