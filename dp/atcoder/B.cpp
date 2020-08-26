#include <bits/stdc++.h>
using namespace std;
void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/input.txt", "r", stdin);
    freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/output.txt", "w", stdout);
#endif
}

int main(){
    c_p_c();
    int n; cin>>n;
    int k; cin>>k;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];

    vector<int> dp(n, INT_MAX);
    dp[0] = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j <= i + k; j++){
            if(j < n){
                dp[j] = min(dp[j], dp[i] + abs(arr[i] - arr[j]));
            }
            
        }
    }
    cout<<dp[n-1]<<endl;
}

