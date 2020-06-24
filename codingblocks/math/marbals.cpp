#include <bits/stdc++.h>
using namespace std;
long long C(int n, int r) {
    if(r > n - r) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        cout<<C(n-1,k-1)<<endl;
    }
}
