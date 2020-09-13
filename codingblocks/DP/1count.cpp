#include <bits/stdc++.h>

using namespace std;

int f(vector<int>& arr, int i, int k){
    //base case
    if(i == 0){
        return 0;
    }
    if(k == 0){
        return 1;
    }
    // if(dp[i][k] != -1 ) return dp[i][k];
    if(arr[i] == 1){
        return  1 + f(arr,i-1,k);
    }else{
        return  max(1 + f(arr,i-1,k-1), f(arr,i-1,k));
    }
}

void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/input.txt", "r", stdin);
    freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/output.txt", "w", stdout);
#endif
}

int main() {
    c_p_c();
    int n; cin>>n;
    int k; cin>>k;
    vector<int> arr(n);
    vector<vector<int>> dp(n, vector<int>(k,-1));
    for(int i = 0; i < n; i++) cin>>arr[i];
    cout<<f(arr,n-1,k)<<endl;
}

