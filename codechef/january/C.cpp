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
//     freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/input.txt", "r", stdin);
//     freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/output.txt", "w", stdout);
// #endif
// }
// const int mod = 1'000'000'007;
// const int N = 3e5, M = N;
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

// int f(int i, int x, int y, vector<int> a, vector<int> b){
//     if(x > y) return 1;
//     if(i < 0) return INT_MAX-10;
//     return min(f(i-1,x,y,a,b), f(i-1,(x - a[i]) + b[i],(y - b[i]) + a[i],a,b)+1);
// }

// void solve() {
//     int n; cin>>n;
//     int m; cin>>m;
//     vector<int> a(n);
//     vector<int> b(m);
//     int sa = 0; 
//     int sb = 0;
//     for(int &x: a){
//         cin>>x;
//         sa += x;  
//     } 
//     for(int &x: b){
//         cin>>x;
//         sb += x;
//     }
//     if(a == b) cout<<-1<<endl;
//     else cout<<f(a.size()-1,sa,sb,a,b)-1<<endl;    
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
// // can youu think of some dp state



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
void solve() {
    int n; cin>>n;
    int m; cin>>m;
    vector<int> a(n);
    vector<int> b(m);
    int sum_a = 0; 
    int sum_b = 0;
    for(int &x: a){
        cin>>x;
        sum_a += x;  
    } 
    for(int &x: b){
        cin>>x;
        sum_b += x;
    }
    if(sum_a > sum_b){
        cout<<0<<endl;
        return;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int cnt = 0;
    int idx =  m  - 1;
    for(int i = 0; i < n; i++ ){
        sum_a = sum_a - a[i];
        sum_b = sum_b - b[idx];
        sum_a = sum_a + b[idx];
        sum_b = sum_b + a[i];
        cnt++; idx--;
        if(sum_a > sum_b || idx < 0){
            break;
        }
    }
    if(sum_a > sum_b){
        cout<<cnt<<endl;
    }else{
        cout<<-1<<endl;
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
