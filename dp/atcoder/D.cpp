/**
 * Author: Ishaan Bajpai
**/
#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/input.txt", "r", stdin);
    freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/output.txt", "w", stdout);
#endif
}
const int mod = 1'000'000'007;
const int N = 3e5, M = N;
//=======================
ll int pow(ll int x, ll int n,ll int mod){
    if(n == 0){
        return  1;
    }
    ll int subprob = pow(x, n/2, mod)%mod;
    if(n&1){
        return (x * subprob * subprob)%mod;
    }
    return (subprob * subprob)%mod;
}
ll f(vector<pair<int, int>> arr, int n, int W){
    ll dp[n+1][W+1];
    for(int w = 0; w <= W; w++)
        dp[1][w] = 0;

    dp[1][arr[1].first] = arr[1].second;

    for(int i = 2; i <= n; i++){
        for(int w = 0 ; w <= W; w++){
            dp[i][w] = dp[i-1][w];
            if(arr[i].first > w){
                continue;
            }
            dp[i][w] = max(dp[i][w],arr[i].second + dp[i-1][w - arr[i].first]);
        }
    }
    return *max_element(dp[n], dp[n] + W + 1);

}


void solve() {
    
    int n; cin>>n;
    int W; cin>>W;
    vector<pair<int, int>> arr(n); // <weight, cost>
    for(int i = 1; i <= n; i++){
        int w; cin>>w;
        int v; cin>>v;
        arr[i].first = w;
        arr[i].second = v;
    }
    cout<<f(arr, n, W)<<endl;
}

int main() {
    c_p_c();
    int t = 1;
    //cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
