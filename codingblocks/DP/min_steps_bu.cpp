#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; n = 10;
    int dp[n+3];
    dp[0] = 0;
    dp[1] = 0;
    for(int i = 2; i <= n; i++){
        dp[i] = min(dp[i-1], min(i%2 == 0?dp[i/2]:INT_MAX, i%3==0?dp[i/3]:INT_MAX)) + 1;
    }
    cout<<dp[n]<<endl;
    
    return 0;
}
