#include <bits/stdc++.h>
using namespace std;

int profit(int p[], int i, int j, int y, int dp[][100]){
    //base case
    if(i > j){
        return 0;
    }
    // return id dp[i][j] -> already computed
    if(dp[i][j] != 0){
        return dp[i][j];
    }
    //recursive case
    return dp[i][j] = max(
        (p[i]*y + profit(p,i+1,j,y+1,dp)),
        (p[j]*y + profit(p,i,j-1,y+1,dp))
    );
}

int main() {
    int p[] = {2,3,5,1,4};
    int n = sizeof(p)/sizeof(int);
    int dp[100][100] = {0};
    cout<<profit(p, 0, n-1,1, dp);
    return 0;
}
