#include <bits/stdc++.h>
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
long long arr[1000];
long long dp[1000][1000];

ll sum(int s, int e){
    ll ans = 0;
    for(int i = s; i <= e; i++){
        ans += arr[i];
        ans %= 100;
    }
    return ans;
}
ll f(int i, int j){
    //base case
    if(i >= j){
        return 0;
    }
    //cashing opturnity
    if(dp[i][j] != -1){
        return dp[i][j];
    }
    //recursice case
    dp[i][j] = INT_MAX;
    for(int k = i; k <= j; k++){
        dp[i][j] = min(dp[i][j], f(i,k) + f(k+1, j) +sum(i,k) * sum(k+1,j));
    }
    return dp[i][j];
}




int main(){
    c_p_c();
    int n;
    while(scanf("%d", &n) != EOF){
         for(int i = 0; i < n; i++) {
            cin>>arr[i];
        }
    
        for(int i = 0; i <= n; i++)
            for(int j = 0; j <= n; j++)
                dp[i][j] = -1;
    
        cout<<f(0,n-1)<<endl;
    }
}

