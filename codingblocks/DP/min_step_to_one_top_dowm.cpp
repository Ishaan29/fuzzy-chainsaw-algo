#include <bits/stdc++.h>
using namespace std;

int f(int n, vector<int> &dp){
    //base case
    if(n == 1 or n == 0){
        return 0;
    }
    if(dp[n-1] != -1){
        return dp[n-1];
    }
    int x = n%3==0?f(n/3,dp):INT_MAX;
    int y = n%2 == 0?f(n/2,dp):INT_MAX;
    int z = f(n-1,dp);
    dp[n] = min(z,min(x,y)) + 1; 
    return min(z,min(x,y)) + 1;
}


int main(){
    int n; n = 5;
    vector<int> dp(n,-1);
    cout<<f(n,dp)<<endl;
    // for(int i = 0; i < n; i++){
    //     cout<<dp[i]<<endl;
    // }
    return 0;
}
