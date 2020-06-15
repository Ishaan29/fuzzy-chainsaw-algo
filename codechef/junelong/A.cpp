#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    for(int i = 0; i<t; i++){
        int a; int k;
        cin>>a>>k;
        int curr = 0; int cnt = 0;
        for(int i = 0; i < a; i++){
            int x; cin>>x;
            curr += x;
            if(x > k){
                cnt += k;
            }else{
                cnt += x;
            }
        }
        cout<<curr-cnt<<endl;
    }
}
