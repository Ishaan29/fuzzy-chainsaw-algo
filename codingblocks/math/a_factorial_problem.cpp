#include <bits/stdc++.h>
#define ll long long 
#define INF 100000000
using namespace std;


int main(){
    int t; cin >>t;
    while(t--){
        int n,k; cin>>n>>k;
        int ans = INF;
        int mp = 1;

        for(int i = 2; i*i <= k; i++){
            if(k % i == 0){
                mp = 0;
                while(k%i == 0){
                    mp++;
                    k /= i;
                }
                int temp = 0;
                ll p = i;
                while(p <= n){
                    temp += n/p;
                    p *= i;
                }
                ans = min(ans, temp/mp);
                
            }
        }
        if(k > 1){
            int tmp = 0;
            ll p = k;
            while(p <= n){
                tmp += n/p;
                p *= k;
            }
            ans = min(ans, tmp);
        }
        if(ans == INF){
            ans = 0;
        }
        cout<<ans<<endl;
        //return 0;
    }
    return 0;
}
