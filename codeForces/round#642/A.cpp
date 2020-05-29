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
void solve(){
  int n,m; cin>>n>>m;
  if(n == 1){
    //cout<<"called 1"<<endl;
    cout<<0<<'\n';
    return;
  }else if(n&1^1 && m&1){
    //cout<<"called 2"<<endl;
    int fl = n/2;
    int el = m/fl;
    cout<< el*n-1<<'\n';
    return;
  }else if(n&1 && m&1^1 && n>=2){
    //cout<<"called 3"<<endl;
    int fl = n/2;
    int el = (m-1)/fl;
    cout<<(el*(n-1)-el) + (el+1)<<'\n'; 
    return;
  }else if(m&1^1 && n&1^1 && n > 2){
    //cout<<"called 4"<<endl;
    cout<<2*m<<'\n';
    return;
  }else if(n&1 && n&1) { 
    //cout<<"called 5"<<endl;
    cout<<2*m<<endl;
    return;
  }else{
    //cout<<"called 6"<<endl;
    cout<<m<<endl;
    return;
  }
}
//  ***** MAIN *****
int main(){
  //ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t; cin>>t;
  while(t--){
    solve();
  }

  return 0;
}
