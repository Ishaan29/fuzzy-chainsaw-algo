#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        long long ans = 0;
        // long long p = pow(2,32);
        for(int i = 0; i < 32; i++){
            if(n&1){
                ans += pow(2,31-i);
                
            }
            n = n>>1;
        }
        cout<<ans<<endl;
    }
}
