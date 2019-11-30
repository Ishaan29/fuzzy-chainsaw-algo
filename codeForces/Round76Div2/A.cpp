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

//  ***** MAIN *****
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  //implementation
  int t; cin>>t;
  while(t--){
      int n,x,a,b; cin>>n>>x>>a>>b;
      int dist = abs(a - b);
      int acc = abs(n - dist - 1);
      if(acc >= x){
          cout<< dist + x<<endl;
      }else{
          cout<<dist + acc<<endl;
      }

  }

  return 0;
}
//5 1 3 2 -> 2
//1 2 4 3 5
//  ^   ^  

//6 0 2 3 -> 1
//1 2 3 4 5 6
//  ^ ^

// 1 2 3 4 5 6 7 8 
//     ^   ^
// 8
