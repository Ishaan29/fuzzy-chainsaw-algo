#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int laders_problem(int n, int k, ll int dp[]){
    int ans = 0;
    //base case
    if(n == 0){
        return 1;
    }
    if(dp[n] != 0){
        return dp[n];
    }
    for(int i  = 1; i <= k; i++){
        if(n-i >= 0){
            ans += laders_problem(n-i,k,dp);
        }
    }
    return dp[n] = ans;
}

int ladders_bottomup(int n, int k){
    ll int dp[100] = {0};
    dp[0] = 1;
    for(int i = 1; i <= n; i++){
        dp[i] = 0;
        for(int j = 1; j <= k; j++){
            if(i - j >= 0){
                 dp[i] += dp[i-j];
            }
        }
    }
    return dp[n];
}   
int f(int n, int k){
    ll int dp[100] = {0};
    dp[0] = 1;
    dp[1] = 1;
    for(int i = 2; i <= n; i++){
        dp[i] = 2*dp[i-1];
        if(i - k  -1 >= 0){
            dp[i] -= dp[i-k-1];
        }
    }
    for(int i = 0; i < n; i++){
        cout<<dp[i]<<" ";
    }
    cout<<endl;
    return dp[n];
}
int main()  {
    int n, k ; n = 99; k = 4;
    ll int dp[100] = {0};
    cout<<laders_problem(n,k,dp)<<endl;
    cout<<ladders_bottomup(n,k)<<endl;
    cout<<f(n,k);
}
