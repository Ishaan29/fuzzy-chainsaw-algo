#include<bits/stdc++.h>
using namespace std;
#define ll long long
//matrix expo
vector<ll> fibo;

vector<ll> fibo(ll n){
    vector<ll> dp(n + 5);
    dp[1] = 1;
    dp[2] = 1;
    for(int i = 3; i < n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp;
}
int main(){
    long long t = 1;
    ll int k; cin>>k;
    vector<ll> dp = findfibo(sqrt(k));
    ll mx = upper_bound(dp.begin(), dp.end(), k);


}

