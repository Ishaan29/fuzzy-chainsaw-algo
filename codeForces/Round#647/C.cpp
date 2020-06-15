#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        long long int ans = 0;
        long long int n; cin>>n;
        for(int i = 1; i<n; i++){
            long long x = i^(i-1);
            ans += __builtin_popcount(x);
        }
        cout<<ans<<endl;
    }
}
