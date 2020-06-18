#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll digitsum(ll n){
    ll ans = 0;
    while(n!=0){
        ll rem = n%10;
        n = n / 10;
        ans += rem;
    }
    return ans;
}
bool isPrime(ll n){
    int flag = true;
    for(ll i = 2; i < sqrt(n); i++){
        if(!(n%i)){
            flag = false;
        }
    }
    return flag;
}
int main(){
    ll n; cin>>n;
    vector<int> prime;
    ll nsum = digitsum(n);
    // if(n%2 == 0){
    //     n = n/2;
    //     prime.push_back(2);
    // }
    while(n%2 == 0){
        n = n/2;
        prime.push_back(2);
    }
    cout<<"n after"<<n<<endl;
    for(ll i = 3; i <= n; i++){
        cout<<"called on "<<i<<endl;
        if(isPrime(i) && (n%i == 0)){
            prime.push_back(i);
        }
    }
    ll primefac = 0;
    for(auto a: prime){
        primefac += a;
    }
    primefac = digitsum(primefac);
    cout<<nsum<<" "<<primefac<<endl;
    if(nsum == primefac){
        cout<<1<<endl;
    }else{
        cout<<0<<endl;
    }
}
