#include <bits/stdc++.h>
using namespace std;

void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/input.txt", "r", stdin);
    freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/output.txt", "w", stdout);
#endif
}

void s(){
     int n; cin>>n;
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            int x; cin>>x;
            if(mp.find(x) == mp.end()){
                mp.insert({x,1});
            }else{
                mp[x]++;
            }
        }
        for(auto a: mp){
            if(a.second == n){
                cout<<n<<endl;
                return;
            }
        }
        cout<<1<<endl;
        return;
}
int main() {
    c_p_c();
    int t; cin>>t;
    
    while(t--){
        s();
       
    }
}
