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
// ****** FUNCTION *******
void whatFlavors(vector<int> cost, int money) {
    map<int, int> s;
    for(int i = 0; i<cost.size(); i++){
        int temp = money - cost[i];
        if(s.find(temp) != s.end()){
            cout<<s.find(temp)->second<<" "
            <<i+1<<"\n";
        }
        else{
            s.insert(pair<int,int>(cost[i],i+1));
            }
    } 
}

//  ***** MAIN *****
int main(){
  //ios::sync_with_stdio(false);
  cin.tie(NULL);

  return 0;
}
