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
#define MAXN 11;
int mat[MAXN][MAXN];
void nqueen(int mat[][MAXN], int n, int r){
    if(r == n){
        for(int i = 0; i<n; i++){
            for(int j = 0; i<n; j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<"\n";
        }
        return;
    }   
    //recursion 
    for)_
}
//  ***** MAIN *****
int main(){
  //ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n; cin>>n;
  memset(mat, 0, sizeof(mat));
  nqueen(mat, n, 0);


  return 0;
}
