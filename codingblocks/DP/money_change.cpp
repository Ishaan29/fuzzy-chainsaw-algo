#include<bits/stdc++.h>
using namespace std;

void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/input.txt", "r", stdin);
    freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/output.txt", "w", stdout);
#endif
}

int f(vector<int>& arr, int n, int k, vector<vector<int>>& dp){
    if(n == 0 || k < 0){
        return 0;
    }
    if(k == 0){
        return 1;
    }
    if(dp[n-1][k-1] != -1){
        return dp[n-1][k-1];
    }
    return dp[n-1][k-1] = f(arr, n, k-arr[n-1],dp) + f(arr,n-1, k,dp);
}

int money_change(vector<int>& arr, int k, int n){
    int dp[n][k] = {0};
    for(int i = 0 ; i < n; i++){
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; i <= k; j++){
            dp[i][j] = dp[i-1][j] + (j >= s[i])?dp[i][j-s[i]]:0;
        
    }
}

int main() {
    c_p_c();
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin>>arr[i];
        int k; cin>>k;
        vector<vector<int>> dp(n, vector<int>(k,-1));
        cout<<f(arr, n,k,dp)<<endl;
    }
    return 0;
}
