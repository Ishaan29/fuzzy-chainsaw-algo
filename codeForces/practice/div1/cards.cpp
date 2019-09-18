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
void solve(string s, int n){
    int zero = 0;
    int one = 0;
    for(int i = 0; i<n; i++){
        printf("%c", s[i]);
        if(s[i] == 'z'){
            zero++;
        }
        if(s[i] == 'n'){
            one++;
        }
    }
    for(int i = 0; i < one; i++){
        cout<<"1 ";
    }
    for(int j = 0; j < zero; j++){
        cout<<"0 ";
    }
}
int main(){
  //ios::sync_with_stdio(false);
  int T ;
  cin>>T;
  for(int i = 0; i<T; i++){
      int n;
      string s;
      cin>>n;
      cin>>s;
      solve(s,n);
  }

  return 0;
}
