#include <bits/stdc++.h>
using namespace std;
long long  int dp[10000];
// int cnt_binaryStrings(int n, int dp[]){
//     //base case 
//     if(n == 2){
//         return 3;
//     }
//     if(n == 1){
//         return 2;
//     }
//     if(n == 0){
//         return 0;
//     }
//     //select one
//     if()
//     return cnt_binaryStrings(n-1) + cnt_binaryStrings(n-2);


// }


int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        memset(dp, 0, sizeof(dp));
        dp[1] = 2;
        dp[2] = 3;
        for(int i = 3; i <= n; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        cout<<dp[n]<<endl;
        // cout<<cnt_binaryStrings(n)<<endl;
    }
    
    return 0 ;
}
