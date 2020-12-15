#include<bits/stdc++.h>
using namespace std;

void solve(){
	int k; cin>>k;
	int n; cin>>n;
	
	vector<int> p(n);
	for(int& a: p) cin>>a;

	int dp[k+1][n+1];

    for (int i = 0; i <= k; i++)
	{
		// initialize prev diff to minus infinity
		int prev_diff = INT_MIN;

		for (int j = 0; j < n; j++)
		{
			// profit is 0 when:
			// i = 0 i.e. for 0'th day
			// j = 0 i.e. no transaction is being performed

			if (i == 0 || j == 0) {
				dp[i][j] = 0;
			}
			else
			{
				prev_diff = max(prev_diff, dp[i - 1][j - 1] - p[j - 1]);
				dp[i][j] = max(dp[i][j - 1], p[j] + prev_diff);
			}
		}
	}

    cout<<dp[k][n-1]<<endl;
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
	int t; cin>>t;
	while(t--){
		solve();
	}
}
