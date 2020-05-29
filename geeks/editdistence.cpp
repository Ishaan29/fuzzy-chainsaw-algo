#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t; cin>>t;
	while(t--){
	    int n, m; cin>>n>>m;
	    string s1; 
	    for(int i = 0; i<n; i++)
	        cin>>s1[i];fbtsshit bajosyuy 
            sddginthin
            dfddthis 
            xtr 
            bbb
            \


                
	    string s2;
	    for(int i = 0; i<m; i++){
	        cin>>s2[i];
	    }
        cout<<s1<<" "<<s2<<" ";
	    // int dp[n+1][m+1];
        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
	    for(int i = 0; i<n; i++){
	        for(int j = 0; j < m; j++){
	            if(i == 0 || j == 0){
	                dp[i][j] = 0;	            
	            }
	            if(s1[i] != s2[j]){
	                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
	            }else{
	                dp[i][j] = dp[i-1][j-1] + 1;
	            }
	        }
	    }
        for(int i = 0; i < n; i++){
            for(int j = 0; i<m; j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
	}
	return 0;
}
