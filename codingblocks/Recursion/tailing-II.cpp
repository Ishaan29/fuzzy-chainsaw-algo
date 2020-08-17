#include <bits/stdc++.h>
using namespace std;
const int MOD = 1'000'000'007;
int tailing(int n, int m){
    if(n == 0){
        return 1;
    }
    if(n < 0){
        return 0;
    }
    int a = tailing(n-1, m);
    int b = tailing(n-m, m);
    return (a + b)%MOD;

}


void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/input.txt", "r", stdin);
    freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/output.txt", "w", stdout);
#endif
}

int main() {
    c_p_c();
    int T; cin>>T;

    while(T--){
        int n,m; cin>>n>>m;
        cout<<tailing(n,m)<<endl;
    }
    return 0;
}


