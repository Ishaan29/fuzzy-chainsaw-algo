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
//   vector<pair<int, int>> points;
//   int n; cin>>n;
//   for(int i = 0; i<n; i++){
//       int x,y; cin>>x>>y;
//       points.push_back(make_pair(x,y));
//   }
//   vector<pair<int, int>> dir = {{1,0},{0,1},{-1,0}, {0,-1}};
//   int cnt = 0;
  
//   for(auto a: points){
//       int curr_cnt = 0;
//       for(auto b: points){
//           for(auto d: dir){
//              if((a.first + d.first == b.first) && (a.second + d.second == b.second)){
//                 //   cout<<a.first + d.first<<" "<<a.second + d.second<<endl;
//                   curr_cnt++;
//                   //cout<<curr_cnt<<endl;
//               }
//           }
//       }
//       if(curr_cnt >= 3){
//           cnt++;
//       }
//   }
//   cout<<cnt;
//   return 0;
 int n; cin >> n;
    int ss=0;
    int x[n], y[n];
    for(int i=0;i<n;i++){
        cin >> x[i] >> y[i];
    }
    for(int i=0;i<n;i++){
        int l =0, r = 0,u= 0,d = 0;
        for(int j=0;j<n;j++){
            if(i == j) continue;
            if(x[j] > x[i] && y[j] == y[i]) r = 1;
            if(x[j] < x[i] && y[j] == y[i]) l = 1;
            if(x[j] == x[i] && y[j] > y[i]) d = 1;
            if(x[j] == x[i] && y[j] < y[i]) u = 1;
        }
        if(l + u + r + d == 4) ss++;
    }
    cout << ss << endl;
    cin >> ss;
    return 0;
}
