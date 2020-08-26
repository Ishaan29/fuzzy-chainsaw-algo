#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int

void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/input.txt", "r", stdin);
    freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/output.txt", "w", stdout);
#endif
}

bool isPossible(vector<lli> &arr, lli  n,  lli k, lli mid){
    lli cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] >= mid) {
            cnt += abs(mid-arr[i]);
        }
    }
    if(cnt < k){
        return false;
    }else {
        return true;
    }
}


int main(){
    c_p_c();
    ll int n; cin>>n;
    ll int k; cin>>k;
    vector<ll int> arr;
    ll int m = INT_MIN;
    for(int i = 0; i < n; i++){
        ll int t; cin>>t;
        arr.push_back(t);
        if(t >= m){
            m = t;
        }
    }
    ll int s = 0; ll int e = m;
    ll int ans = 0;
    while(s <= e){
        ll int mid = s+(e-s)/2;
        bool p = isPossible(arr,n,k,mid);
        if(p){
            ans = mid;
            s = mid + 1;
        }else{
            e = mid - 1;
        }
    }
    cout<<ans<<endl;

    return 0;
}
