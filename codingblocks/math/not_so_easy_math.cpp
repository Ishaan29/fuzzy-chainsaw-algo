#include <bits/stdc++.h>
#define ll long long
using namespace std;
void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main(){
    c_p_c();
    int t; cin>>t;
    int primes[] = {2,3,5,7,11,13,17,19};
    while(t--){
        ll n; cin>>n;
        ll subset = (1<<8)-1;
        ll ans = 0;
        for(ll i = 1; i <= subset; i++){
            ll demon = 1ll;
            ll setbits = __builtin_popcount(i);
            for(ll j = 0; j <= 7; j++){
                if(i&(1<<j)){
                    demon = demon * primes[j];
                }
            }
            if(setbits&1){
                ans += n/demon;
            }else{
                ans -= n/demon;
            }
        }
        cout<<ans<<endl;
    }
}
