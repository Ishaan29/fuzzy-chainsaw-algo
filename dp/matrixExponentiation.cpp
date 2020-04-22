#include <bits/stdc++.h>

using namespace std;

#define LIMIT 100
#define PLIMIT 10000010
#define MOD 1000000007ll
#define INF 1e9
typedef long long ll;
typedef pair<ll, ll> ii;
int gcd(ll a, ll b) { return (b==0)?a:gcd(b, a%b); }
int lcm(ll a, ll b) { ll i=(a/gcd(a,b))*b; assert(i>0); return i; }
int dx[4] = {0, 1, 0, -1}, dy[4] = {-1, 0, 1, 0};
//  ***** FUNCTION *****
const int MAX_SIZE = 50;
ll r[2][2]={{1,1},{1,0}};
const int mod = 10e8+7;

void multiply(ll a[2][2], ll b[2][2]){
    ll x = ((a[0][0]*b[0][0])%mod+(a[0][1]*b[1][0])%mod)%mod;
    ll y = ((a[0][0]*b[0][1])%mod+(a[0][1]*b[1][1])%mod)%mod;
    ll z = ((a[1][0]*b[0][0])%mod+(a[1][1]*b[1][0])%mod)%mod;
    ll w = ((a[1][0]*b[0][1])%mod+(a[1][1]*b[1][1])%mod)%mod;
 
    a[0][0]=x;
    a[0][1]=y;
    a[1][0]=z;
    a[1][1]=w;
}

void power(ll a[2][2],ll n)
{
    if(n==1)
        return;
    power(a,n/2);
    multiply(a,a);
    if(n%2!=0)
        multiply(a,r);
}
 
//  ***** MAIN *****
int main(){
  //ios::sync_with_stdio(false);
  cin.tie(NULL);
   int t;cin>>t;
    while(t--){
        ll n;cin>>n;
 
        if(n==1)
            cout<<2<<endl;
        else if(n==2)
            cout<<3<<endl;
        else
        {
            ll a[2][2]={{1,1},{1,0}};
            power(a,n-2);
            cout<<((a[0][0]*3)%mod+(a[0][1]*2)%mod)%mod<<endl;
 
        }
    }
}
