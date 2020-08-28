/*
Alex and Lee play a game with piles of stones.  There are an even number of piles arranged in a row, and each pile has a positive integer number of stones piles[i].

The objective of the game is to end with the most stones.  The total number of stones is odd, so there are no ties.

Alex and Lee take turns, with Alex starting first.  Each turn, a player takes the entire pile of stones from either the beginning or the end of the row.  This continues until there are no more piles left, at which point the person with the most stones wins.

Assuming Alex and Lee play optimally, return True if and only if Alex wins the game.

 

Example 1:

Input: piles = [5,3,4,5]
Output: true
Explanation: 
Alex starts first, and can only take the first 5 or the last 5.
Say he takes the first 5, so that the row becomes [3, 4, 5].
If Lee takes 3, then the board is [4, 5], and Alex takes 5 to win with 10 points.
If Lee takes the last 5, then the board is [3, 4], and Alex takes 4 to win with 9 points.
This demonstrated that taking the first 5 was a winning move for Alex, so we return true.
*/



class Solution {
public:
    int f(vector<int> &a, int i, int j, int dp[][1000]){
        //basecase
        if(i > j){
            return 0;
        }
        if(dp[i][j] != 0){
            return dp[i][j];
        }
        //recursive case
        return dp[i][j] = max(a[i] + f(a, i+2, j,dp), a[j] + f(a, i, j-2,dp));
    }
    
    bool stoneGame(vector<int>& piles) {
        //recursive
        //f(i,j) = max(a[i] + f(i+2), a[j] + f(j - 2));
        int s = 0;
        int dp[1000][1000] = {0};
        for(auto p: piles) s += p;
        return f(piles, 0, piles.size() -1,dp) >= s/2;
        
    }
};
