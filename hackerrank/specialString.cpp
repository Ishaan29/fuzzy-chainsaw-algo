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
long substrCount(int n, string s) {
    /*NOTE:= brute force solution. 
             create all possible substring 
             then check if the substrings are
             palendromic. TLE
    */
    /* NOTE:= Approch 2
              lets do something with    frequency table
    */
    long count = 0;
    vector<std::pair<char, int>> freq;
    int i=0, j=0;
    for ( i = 0; i < n; i++){
        for( j = i+1; j < n; j++){
            if (s[j] == s[i])
                continue;
            else
                break;
        }
        freq.push_back(std::make_pair(s[i],j-i));
        i = j-1;
    }

    for (i=0; i < freq.size(); i++)
        count += (freq[i].second+1) * freq[i].second / 2;

    for (i=1; i < freq.size()-1; i++){
        if ( freq[i].second == 1 && freq[i-1].first == freq[i+1].first)
            count += min(freq[i-1].second, freq[i+1].second);
    }
    return count;
}

int main(){
  //ios::sync_with_stdio(false);
  cin.tie(NULL);

  return 0;
}
