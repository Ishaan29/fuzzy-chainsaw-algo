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
#define f(i,s,e) for(long long int i = s; i < e; i++)
#define print(arr,s,e) f(i,s,e) cout<<arr[i]<<" "; cout<<endl;
#define cf(i,s,e) for(long long int i = s; i <= e; i++)
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

ll dp[4020][4020];
ll pref[4020];


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

ll Dfn(ll idx, ll taken, ll n, ll k, vector<ll int> &arr){
    if(taken >= k && (pref[idx]- taken >= k)) return 0;
    else if(idx>=n) return 1e10;
    else if(dp[idx][taken]!= -1) return dp[idx][taken];

    ll c1 = Dfn(idx+1, min(taken+arr[idx],pref[idx]-taken),n,k,arr);
    ll c2 = Dfn(idx+1, min(pref[idx]-taken+arr[idx], taken),n,k,arr);

    return dp[idx][taken] = 1 + min(c1,c2);
}

ll givemedp(vector<ll int> &arr, ll n, ll k){
    f(i,0,n/2) swap(arr[i],arr[n-i-1]);
    cf(i,0,n+10){
        pref[i] = 0;
        cf(j,0,n+10) dp[i][j] = -1;
    }
    cf(i,1,n) pref[i] = pref[i-1] + arr[i - 1];
    ll ans = Dfn(0,0,n,k,arr);
    return ans > 1e9?-1:ans;
}


void solve() {
    ll n,k; cin>>n>>k;
    vector<ll int> arr(n,0);
    for(auto &a: arr) cin>>a;
    sort(arr.begin(),arr.end());
    if(n == 1){
        cout<<-1<<endl;
        return;
    }
    cout<<givemedp(arr,n,k)<<endl;
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
