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
    ll int a,b,c,d; cin>>a>>b>>c>>d;
    int odd_cnt = 0;
    int even_cnt = 0;
    //cout<<(a==b==c==d);
    if(a == b && b == c ){
        cout<<"YES"<<endl;
        return;
    }
    if(a&1){
        odd_cnt++;
    }else{
        even_cnt++;
    }

    if(b&1){
        odd_cnt++;
    }else{
        even_cnt++;
    }

    if(c&1){
        odd_cnt++;
    }else{
        even_cnt++;
    }

    if(d&1){
        odd_cnt++;
    }else{
        even_cnt++;
    }

    if(odd_cnt == 1){
        cout<<"YES"<<endl;
        return;
    }
    //deb2(odd_cnt, even_cnt);
    int m = min(a,min(b,c));
    a = a-m;
    b = b-m;
    c = c-m;
    d = d+(3*m);
   
    even_cnt = 0;
    odd_cnt = 0;
    if(a&1){
        odd_cnt++;
    }else{
        even_cnt++;
    }

    if(b&1){
        odd_cnt++;
    }else{
        even_cnt++;
    }

    if(c&1){
        odd_cnt++;
    }else{
        even_cnt++;
    }

    if(d&1){
        odd_cnt++;
    }else{
        even_cnt++;
    }
    // deb2(a,b);
    //  deb2(c,d);
    if(odd_cnt == 1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return;

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

