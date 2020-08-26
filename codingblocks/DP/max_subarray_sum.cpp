#include <bits/stdc++.h>
using namespace std;


int maxSum(int arr[], int n){
    int dp[100] = {0};
    dp[0] = arr[0]>0?arr[0]:0;
    int max_so_far = arr[0];
    for(int i = 1; i < n; i++){
        dp[i] = dp[i-1] + arr[i]; // since dp[i] only depends on dp[i-1] this can be further optimized
        if(dp[i] < 0){
            dp[i] = 0;
        }
        max_so_far = max(dp[i], max_so_far);
    }
    return max_so_far;
}

//space optimized dp also known as kadane's algo'm
int kadane(int arr[], int n){
    int curr_sum = 0;
    int max_so_far = 0;
    for(int i = 0; i < n; i++){
        curr_sum += arr[i];
        if(curr_sum < 0){
            curr_sum = 0;
        }
        max_so_far = max(curr_sum, max_so_far);
    }
    return max_so_far;
}




int main() {
    int arr[] = {-3,2,5,-1,6,3,-2,7,-5,2};
    int n = sizeof(arr)/sizeof(int);
    cout<<maxSum(arr,n)<<endl;
    cout<<kadane(arr,n)<<endl;
    return 0;
}
