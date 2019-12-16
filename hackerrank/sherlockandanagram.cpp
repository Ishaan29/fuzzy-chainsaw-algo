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
int sherlockAndAnagrams(string str) {
    int N = str.length(); 
    map<vector<int>, int> mp; 
    for (int i=0; i<N; i++) { 
        vector<int> freq(MAX_CHAR, 0);// @params:= 26 ints with value 0
        for (int j=i; j<N; j++){ 
            freq[toNum(str[j])]++;
            mp[freq]++; 
        } 
    }
    int result = 0; 
    for (auto it=mp.begin(); it!=mp.end(); it++) 
    { 
        int freq = it->second;
        cout<<"freq "<<freq<<endl;
        for(int i = 0; i<it->first.size(); ++i) cout<<it->first[i]<<endl;
        result += ((freq) * (freq-1))/2;//total possibilities 
    } 
    return result;
}
//  ***** MAIN *****
int main(){
  //ios::sync_with_stdio(false);
  cin.tie(NULL);

  return 0;
}
