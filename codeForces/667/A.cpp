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
int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
int f(int n, vector<int>& dp){
    //base case
    if(n == 0){
        return 1;
    }
    if(n < 0){
        return 0;
    }
    if(dp[n] != 0){
        return dp[n];
    }
    int ans = INT_MAX;
    for(int i = 1; i <= 10; i++){
        if(i <= n){
             ans = min(ans, 1 + f(n - i, dp));
        }  
    }
    return dp[n] = ans;
}
void solve() {
    int a; cin>>a;
    int b; cin>>b;
    int cnt = 0;
    if(b > a){
        vector<int> dp(b-a+2, INT_MAX);
        int t = b - a;
        dp[0] = 1;
        for(int i = 1; i <= t; i++){
            for(int j = 1; j <= 10; j++){
                if(j > i) continue;
                dp[i] = min(dp[i] , 1 + dp[i - j]);
            }
        }
        //for(auto a: dp) cout<<a<<" ";
        cout<<dp[t-1]-1<<endl;
        // int t = b - a;
        // for(int i = 10; i > 0 || t != 0; i++){
        //         if(t % i == 0){
        //             cnt += t / i;
        //             t = t / i;
        //         }else{
        //             continue;
        //         }
                
                
        // }
        // cout<<cnt<<endl;
    }else if( a > b){
        vector<int> dp(a-b+2, INT_MAX);
        int t = a - b;
        dp[0] = 1;
        for(int i = 1; i <= t; i++){
            for(int j = 1; j <= 10; j++){
                if(j > i) continue;
                dp[i] = min(dp[i] , 1 + dp[i - j]);
            }
        }
        //for(auto a: dp) cout<<a<<" ";
        cout<<dp[t-1]-1<<endl;
    //    int t = a - b;
    //     for(int i = 10; i > 0 || t != 0; i++){
    //             if(t % i == 0){
    //                 cnt += t / i;
    //                 t = t / i;
    //             }else{
    //                 continue;
    //             }
                
                
    //     }
    //     cout<<cnt<<endl;
    }else{
        cout<<0<<endl;
    }
    
   
}

int main() {
    c_p_c();
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
