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
    int n; cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        if(mp.find(arr[i]) == mp.end()){
            mp.insert(pair<int,int>(arr[i], 1));
        }else{
            mp[arr[i]]++;
        }
    }
    int cnt = 0;
    if(arr[0] == 0){
        cnt++;
        for(int i = 1; i < n; i++){
            if(arr[i+1] == 1 + arr[i] || arr[i] == arr[i+1]){
                cnt++;
            }
        }
        cnt++;
         for(auto a: mp){
        if(a.second > 2){
            cnt = cnt - (a.second - 2);
        }
    }
    }
   
    cout<<cnt<<endl;
}


int main() {
    c_p_c();
    int t; cin>>t;
    while(t--){
        solve();
    }
}

