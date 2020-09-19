#include <bits/stdc++.h>
using namespace std;


pair<int, int> left_set_bit(int n){
    int idx = 0;
    int m = 32;
    for(int i = 0; i < 32; i++){
        if(n&(1<<i)){
            //cout<<"called "<<i<<endl;
            idx = i;
            m = min(idx, m);
        }
    }
    return {idx, m};
}

void solve(){
    int n; n = 9;
    pair<int, int> ans = left_set_bit(n);
    cout<<ans.first<<" "<<ans.second<<endl;
}

int main(){
    int t; t = 1;
    while(t--){
        solve();
    }
}
