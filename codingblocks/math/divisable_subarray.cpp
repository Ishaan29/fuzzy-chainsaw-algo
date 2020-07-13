// /**
//  * Author: Ishaan Bajpai
// **/
// #include<bits/stdc++.h>
// using namespace std;
// #define gc getchar_unlocked
// #define fo(i,n) for(i=0;i<n;i++)
// #define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
// #define ll long long
// #define si(x)	scanf("%d",&x)
// #define sl(x)	scanf("%lld",&x)
// #define ss(s)	scanf("%s",s)
// #define pi(x)	printf("%d\n",x)
// #define pl(x)	printf("%lld\n",x)
// #define ps(s)	printf("%s\n",s)
// #define deb(x) cout << #x << "=" << x << endl
// #define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
// #define pb push_back
// #define mp make_pair
// #define F first
// #define S second
// #define all(x) x.begin(), x.end()
// #define clr(x) memset(x, 0, sizeof(x))
// #define sortall(x) sort(all(x))
// #define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
// #define PI 3.1415926535897932384626
// typedef pair<int, int>	pii;
// typedef pair<ll, ll>	pl;
// typedef vector<int>		vi;
// typedef vector<ll>		vl;
// typedef vector<pii>		vpii;
// typedef vector<pl>		vpl;
// typedef vector<vi>		vvi;
// typedef vector<vl>		vvl;

// void c_p_c()
// {
//     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
// }
// const int mod = 1'000'000'007;
// const int N = 3e5, M = N;
// long long C(int n, int r) {
//     if(r > n - r) r = n - r; // because C(n, r) == C(n, n - r)
//     long long ans = 1;
//     int i;

//     for(i = 1; i <= r; i++) {
//         ans *= n - r + i;
//         ans /= i;
//     }

//     return ans;
// }
// //=======================
// ll int pow(ll int x, ll int n,ll int mod){
//     if(n == 0){
//         return  1;
//     }
//     ll int subprob = pow(x, n/2, mod)%mod;
//     if(n&1){
//         return (x * subprob * subprob)%mod;
//     }
//     return (subprob * subprob)%mod;
// }
// void solve() {
//     /**
//      * NOTE :=
//      * TODO :=  Make a prefix sum
//      *          use modulo distributedve property on prefix sum
//      *          ie, calsulate pre[i-1] + arr[i]%k = pre[i].
//      *          use modulo circular property on it on prefix arr.
//      *          cnt the number of repeted numbers.
//      *          here k is set to 5.
//     */
// //    int n; cin>>n;
// //    int arr[n];
// //    for(int i = 0; i < n; i++){
// //        cin>>arr[i];
// //    }
// //    int pre[n+1];
// //    pre[0] = 0;
// //    for(int i = 1; i < n; i++){
// //        //deb2(pre[i-1], arr[i-1]);
// //        pre[i] = (pre[i-1]%5) + (arr[i-1]%5);
// //    }
// //    int cntarr[6] = {0};
// //    for(int i = 0; i <= n; i++){
// //        cntarr[pre[i]]++;
// //    }
// //    ll int ans = 0;
// //    for(int i = 0; i < n; i++){
// //        if(cntarr[i] > 1){
// //            ans += C(cntarr[i], 2);
// //        }
// //    }
// //    cout<<ans<<endl;

//     int n; cin>>n;
//     int pre[100005];
//     pre[0] = 0;
//     int pmod = 5;
//     for(int i = 1; i <= n; i++){
//         int t; cin>>t;
//         pre[i] = (pre[i-1]%pmod + t%pmod)%pmod;
//     }
//     // cout<<"pre"<<endl;
//     // for(auto a: pre){
//     //     cout<<a<<" ";
//     // }

//     int cnt[8 ] = {-1};
//     for(int i = 0; i <= n; i++){
//         if(cnt[pre[i]] == -1){
//             cnt[pre[i]] = 1;
//         }else{
//             cnt[pre[i]]++;
//         }
//     }
//     // for(auto a: cnt){
//     //     cout<<a<<" ";
//     // }
//     // cout<<endl;
//     ll int ans = 0;
//     for(int i = 0; i < 5; i++){
//         if(cnt[i] > 1){
//             ans += C(cnt[i], 2);
//         }
//     }
//     cout<<ans<<endl;
// }

// int main() {
//     c_p_c();
//     int t = 1;
//     cin >> t;
//     while(t--) {
//       solve();
//     }

//     return 0;
// }

#include <iostream>
#include <stdlib.h>
#include <cstring>

#define ff first
#define se second
#define pb push_back
#define nn 100010
#define mt make_tuple
#define mp make_pair
#define ll long long int
#define db double
#define ldb long double
#define inf 1000000000000000000ll
#define logn 20
#define mod 1000000007ll
#define mod1 mod
#define mod2 100000009ll
#define sqr(a) a*1ll*a
#define cmp 1e-16
using namespace std;

ll a[nn],pre[nn];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll sum=0;
        memset(pre,0,sizeof pre);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
            sum%=n;
            sum=(sum+n)%n;
            pre[sum]++;
        }
        ll ans=(pre[0]*(pre[0]+1))/2;
        for(int i=1;i<n;i++)
        {
            ans+=(pre[i]*(pre[i]-1))/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}
