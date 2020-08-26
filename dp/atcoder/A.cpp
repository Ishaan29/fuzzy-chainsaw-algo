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

int f(vector<int> arr, int n){
    vector<int> dp(n);
    dp[0] = 0;
    dp[1] = abs(arr[0] - arr[1]);
    for(int i = 2; i <= n; i++){
        dp[i] = min(dp[i-1]+abs(arr[i] - arr[i-1]), dp[i-2]+abs(arr[i]- arr[i-2]));
    }
    return dp[n-1];
}

int main() {
    c_p_c();
    int n;  cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];
    cout<<f(arr,n);
}
