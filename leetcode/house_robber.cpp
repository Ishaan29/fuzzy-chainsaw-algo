class Solution {
public:
    //if using 1 based indexing
    //dp[n] = max(f(n-1), nums[i-1] + f(n-2));
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        
        if(n == 0){
          return 0;  
        } 
        
        int dp[1000];
        dp[0] = 0; dp[1] = nums[0];
        
        for(int i = 2; i <= n; i++){
            dp[i] = max(dp[i-1] , nums[i-1] + dp[i-2]);
        }
        
        return dp[n];
    }
};
