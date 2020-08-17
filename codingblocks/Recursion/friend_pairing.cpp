#include <bits/stdc++.h>
using namespace std;


void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/input.txt", "r", stdin);
    freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/output.txt", "w", stdout);
#endif
}


ll int cnt_pair(int n){
    //base case
    if(n <= 1){
        return 1;
    }
    if(n == 2){
        return 2;
    }
    //recursive case
    return cnt_pair(n-1) + (n-1)*cnt_pair(n-2);
}

int main(){
    // /c_p_c();
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<cnt_pair(n)<<endl;
    }
}
