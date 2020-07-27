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
    /**
     * NOTE :=
     * TODO :=  
    */
   int n; cin>>n;
   vector<char> incoming;
   vector<char> outgoing;
   for(int i = 0; i < n; i++){
       char ch; cin>>ch;
       incoming.push_back(ch);
   }
   for(int i = 0; i < n; i++){
       char ch; cin>>ch;
       outgoing.push_back(ch);
   }
   vector<vector<char>> ans(n, vector<char>(n,'N'));
   for(int i = 0; i < n; i++){
       for(int j = 0; j < n; j++){
           if(i == j){
               ans[i][j] = 'Y';
               continue;
           }
           if(abs(i - j) == 1){
                if(outgoing[i] == 'Y' && incoming[j] == 'Y'){
                    ans[i][j] = 'Y';
                }else if(outgoing[i] == 'Y' && incoming[j] == 'N'){
                    ans[i][j] = 'N';
                }else{
                    ans[i][j] = 'N';
                } 
           }
           if(outgoing[j-1] == 'Y' && incoming[j] == 'Y' && ans[i][j-1] == 'Y'){
               ans[i][j] = 'Y';
           }
       }    
    }
    for(int i = n-1; i > 0; i--){
        for(int j = n-1; j > 0; j--){
            if(outgoing[j+1] == 'Y' && incoming[j] == 'Y' && ans[i][j] == 'Y'){
               ans[i][j] = 'Y';
           }
        }
    }

   for(int i = 0; i < n; i++){
       for(int j = 0; j < n; j++){
           cout<<ans[i][j];
       }
       cout<<'\n';
   }
}

int main() {
    c_p_c();
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout<<"Case #"<<i<<":"<<endl;
        solve();
    }

    return 0;
}
