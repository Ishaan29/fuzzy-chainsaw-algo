#include <bits/stdc++.h>
using namespace std;

// f(n) = for all i :=  min {f(n-coin[i])} + 1;

int f(vector<int> &coins, int n, vector<int> &dp){
    if(n == 0){
        return 0;
    }
    if(dp[n] != 0){
        return dp[n];
    }
    int ans = INT_MAX;
    for(int i = 0; i < coins.size(); i++){
        if((n - coins[i]) >= 0){
            ans = min(ans,f(coins, n-coins[i], dp));
        }
    }
    return dp[n] = ans + 1;
}
int main() {
    vector<int> coins = {1,7,10};
    int n = 15;
    vector<int> dp(n+5,0);
    cout<<f(coins,n,dp)<<endl;
    return 0;
}
