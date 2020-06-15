#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int cnt[64] = {0};
    for(int i = 0; i < n; i++){
        int no; cin>>no;
        int j = 0; 
        while(no > 0){
            cnt[j] = (no&1);
            no = no>>1;
            j++;
        }
    }
    int p = 1;
    int ans = 0;
    for(int i = 0; i < 64; i++){
        cnt[i] %= 3;
        ans += (cnt[i] *p);
        p = p<<1;
    }
    cout<<ans<<endl;
}
