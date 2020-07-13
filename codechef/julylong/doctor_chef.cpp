#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void test(){
    ll n, x, days = 0;
    cin >> n >> x;
    vector<ll> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cout<<a[n]<<endl;
}

void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/input.txt", "r", stdin);
    freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/output.txt", "w", stdout);
#endif
}
int main(){
    c_p_c();
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
