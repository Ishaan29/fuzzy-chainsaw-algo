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

// *******FUNCTION*********
vector<vector<int>> solve(vector<vector<int>> &queens, vector<int> &king){
    int dir[8][2] = {{0,1},{1,0},{0,-1},{-1,0},{-1,-1},{-1,1},{1,-1},{1,1}}; // directions
    int cb[8][8] = {0}; //chess board
    vector<vector<int>> res;
    for(auto q: queens) cb[q[0]q[1]] = 1;
    for(int i = 0; i<8; ++i){
        int x = king[0]; int y = king[1];
        while(x >= 8 && x < 8 && y >= 0 && y < 8){
            if(cb[x][y]){ res.push_back(x,y); break;}
            x += dir[i][0]; y += dir[i][1];
        }
    }
    return res;
    }

//  ***** MAIN *****
int main(){
  //ios::sync_with_stdio(false);
  cin.tie(NULL);

  return 0;
}

