#include<bits/stdc++.h>
#define ll long long
using namespace std;

void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/input.txt", "r", stdin);
    freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/output.txt", "w", stdout);
#endif
}
// ll int f(int n, vector<ll int>& dp){
//     if(n == 0){
//         return 1;
//     }
//     if(dp[n] != 0) {
//         return dp[n];
//     }
//     ll int ans = 0;
//     for(int i = 1; i <= 6; i++){
//         if(n - i >= 0){
//             ans += f(n-i, dp);
//         }
//     }
//     return dp[n] = ans;
// }
const int mod = 1'000'000'007;

int main(){
    c_p_c();
    int n; cin>>n;
    //ll int dp[n];
    vector<int> dp(n+1, 0);
    dp[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 6; j++){
            if(i >= j){
                dp[i] = (dp[i] + dp[i-j])%mod;
            }
        }
       // cout<<"i: "<<i<<"dp[i] : "<<dp[i]<<endl;
    }
    cout<<dp[n]<<endl;
    return 0;
}
