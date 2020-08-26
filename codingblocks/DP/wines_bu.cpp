#include <bits/stdc++.h>
using namespace std;

int main(){
    int wines[] = {2,3,5,1,4};
    int n = sizeof(wines)/sizeof(int);
    int dp[100][100] = {0};
    for(int i = n; i > 0; i--){
        for(int j = i; j <= n; j++){
            int day = n-i + 1;
            if(i == j){
                dp[i][j] = max(wines[i]*n, wines[j]*n);
            }
            else {
                dp[i][j] = max(
                    (wines[i]*day + dp[i+1][j]),
                    (wines[j]*day + dp[i][j-1])
                );
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<setw(3)<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
}
