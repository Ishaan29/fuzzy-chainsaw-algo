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
// ********* FUNCTION ***********
void solve(int arr[], int size){
    int s = sizeof(arr)/sizeof(int);
    int f = arr[0]; int l = arr[1];
    sort(arr, arr+s);
    int sum = 0;
    int curr_sum = f + l + sum;
    for(int i = 0; i<s; i++){
        if(sum = )
    }
}
//  ***** MAIN *****
int main(){
  //ios::sync_with_stdio(false);
  cin.tie(NULL);

  return 0;
}
