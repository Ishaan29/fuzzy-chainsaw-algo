#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int ans = 0;
    for(int i = 0; i < n; i++){
        int t; cin>>t;
        ans ^= t;
    }
    cout<<ans<<endl;
    return 0;
}
