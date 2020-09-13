/*
Stickler the thief wants to loot money from a society having n houses in a single line. 
He is a weird person and follows a certain rule when looting the houses.
According to the rule, he will never loot two consecutive houses. 
At the same time, he wants to maximize the amount he loots. 
The thief knows which house has what amount of money but is unable to come up with an optimal looting strategy. 
He asks for your help to find the maximum money he can get if he strictly follows the rule. 
Each house has a[i] amount of money present in it.

Input:
The first line of input contains an integer T denoting the number of test cases. T testcases follow. Each test case contains an integer n which denotes the number of houses. Next line contains space separated numbers denoting the amount of money in each house.

Output:
For each testcase, in a newline, print an integer which denotes the maximum amount he can take home

Example:
Input:
2
6
5 5 10 100 10 5
3
1 2 3
Output:
110
4
*/
#include <bits/stdc++.h>
using namespace std;

int f(vector<int>& arr, int i, vector<int>& dp){
    if(i < 0){
        return 0;
    }
    if(dp[i] != -1) return dp[i];
    return dp[i] = max(arr[i] + f(arr, i - 2, dp), f(arr, i-1,dp));
}

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    vector<int> arr(n);
	    vector<int> dp(n,-1);
	    for(int i = 0; i < n; i++) cin>>arr[i];
	    cout<<f(arr, n-1, dp)<<endl;
	}
	return 0;
}
