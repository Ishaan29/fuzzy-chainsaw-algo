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

//  ***** MAIN *****
int main(){
  //ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t; cin>>t;
  
  while(t--){
      int n; cin>>n;
      int temp = n;
      int i = 1;
      vector<int> ans;
      while(temp > 0){
          int l = temp%10;
          if(l != 0 ) ans.push_back(l*i);
          i *= 10;
          temp /= 10;
        }
    cout<<ans.size()<<endl;
    for(auto a: ans){
        cout<<a<<" ";
    }
    cout<<endl;    
  }
 
  return 0;
}
