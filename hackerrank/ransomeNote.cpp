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
//  ***** FUNCTION ******
void checkMagazine(vector<string> magazine, vector<string> note) {
    map<string, int> mag;//save the string and the frequency of the words.
    for(auto m: magazine){
        if(mag.find(m) == mag.end()){
            mag.insert(pair<string, int>(m,1));
        }else{
            mag[m]++;
        }
    }
    for(auto n: note){
        if(mag.find(n) != mag.end() && mag.find(n)->second > 0){//check the freq and the exitence of the word.
            mag[n]--;
        }else{
            cout<<"No"<<"\n";
            return;
        }
    }
    cout<<"Yes"<<"\n";
}


//  ***** MAIN *****
int main(){
  //ios::sync_with_stdio(false);
  cin.tie(NULL);


  return 0;
}
