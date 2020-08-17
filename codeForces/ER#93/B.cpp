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
void eraseSubStr(std::string & mainStr, const std::string & toErase)
{
    // Search for the substring in string
    size_t pos = mainStr.find(toErase);
    if (pos != std::string::npos)
    {
        // If found then erase it from string
        mainStr.erase(pos, toErase.length());
    }
}
void solve() {
    string s; cin>>s;
    int a = 0; int b = 0;
    int k = 1;
    bool flag = false;
   while(!flag){
        int cnt = 0; int res = 0;
        int e = 0; int z = 0;
        for(int i = 0; i < s.length(); i++){

        if(s[i] =='0'){
            cnt = 0;
            z++;
            // st = INT_MAX; e = 0;
        }else{
            cnt++;
            res = max(cnt, res);
        }


    }
        string sub = "";
        for(int k = 0; k < res; k++){
            sub += '1';
        }
        eraseSubStr(s, sub);
        if(k&1){
            a += res;
        }else{
            b += res;
        }
        k++;
        int c_z = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '0'){
                c_z++;
            }
        }
        if(c_z == s.length()|| s.length() == 1){
            flag = true;
        }   
    }
    cout<<a<<endl;
    
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
