#include <bits/stdc++.h>
using namespace std;

int f(int n, int price[], int dp[]){
    //basecase
    if(n == 0){
        return 0;
    }
    if(dp[n] != 0){
        return dp[n];
    }
    //recusive case
    int ans = 0;
    for(int i = 1; i <= n; ++i){
        ans = max(ans, price[i-1] + f(n-i,price, dp));
       // cout<<ans<<endl;
    }
    return dp[n] = ans;
}


int main(){
    int n; n = 4;
    int prices[] = {1,3,2,5};
    int dp[100] = {0};
    cout<<f(n, prices, dp)<<endl;
    return 0;

}
