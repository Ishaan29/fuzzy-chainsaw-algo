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


void solve(){
    string s; cin>>s;
    bool w = false;
    bool com = false;
    bool fwd = false;
    int w_cnt = 0;
    int fw_cnt = 0;
    for(int i = 0; i < s.length(); i++){
        if(w_cnt == 3 && !w){
            cout<<".";
            w = true;
        }
        if(s[i] == 'w'){
            w_cnt++;
        }else{
            w_cnt = 0;
        }
        if(i+3 <= s.length()){
            if(s[i] == 'c' && s[i+1] == 'o' && s[i+2] == 'm' && !com){
                cout<<".";
                com = true;
                fw_cnt = i+3;
            }
        }
        if(i == fw_cnt && !fwd && i != 0){
            cout<<"/";
            fwd = true;
        }
        cout<<s[i];

    }
}

int main(){ 
    c_p_c();
    int t; t = 1;
    while(t--){
        solve();
    }
}

