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
void solve(string s){
    int count = 0;
    int i = 0;
    for(i = 0; i<s.size(); i++){
        count++;
    }
    int a = count;
    if(a >= 11){
        printf("%c%d%c\n", s[0],count - 2,s[count-1]);
    }else{
        cout<<s<<"\n";
    }
}
int main(){
  //ios::sync_with_stdio(false);
  int T ;
  cin>>T;
  for(int i = 0; i<T; i++){
      string s;
      cin>>s;
      solve(s);
  }
  
  return 0;
}

