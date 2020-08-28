#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> coins = {1,7,10};
    int n = 99;
    int dp[100] = {0};
    // dp[i] = Æ i min{d[n-coin[i]]} + 1;
    for(int i = 1; i <= n; i++){
        dp[i] = INT_MAX;
        for(auto coin: coins){
            if(i - coin >= 0){
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
            
        }
    }
    cout<<dp[n]<<endl;
}
