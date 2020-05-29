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
int n; cin>>n;
      int k; cin>>k;
      if((n&1) && (k&1^1)){
          cout<<"NO\n";
          return;
      }
      if((n&1^1) &&(k&1)){
          if(n < 2*k){
              cout<<"NO\n";
              return;
          }
          cout<<"YES\n";
          for(int i = 1; i< k; ++i){
              cout<<"2 ";
          }
          cout<< n-2*(k-1) <<"\n";

    }else{
        if(n < k){
            cout<<"NO\n";
            return;
        }
        cout<<"YES\n";
        for(int i = 1; i<k; ++i){
            cout<<"1 ";
        }
        cout<< n - (k - 1) << "\n";

    }
    return;
  
}
//  ***** MAIN *****
int main(){
  //ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t; cin>>t;
  while(t--){
      solve();
  }      
  return 0 ;
}
