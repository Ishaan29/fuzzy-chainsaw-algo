#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long int a, b; cin>>a>>b;
        long long cnt = 0;
        bool flag = false;
        if(a > b){
            while(a != b && a > b){
                if(a&1){
                    break;
                }
                if(b <= (a>>3)){
                    cnt++;
                    a = a>>3;
                    continue;
                }else if(b <= (a>>2){
                    cnt++;
                    a = a>>2;
                    continue;
                }else if(b >= (a>>1){
                    cnt++;
                    a = a>>1;
                    continue;
                }else if(a == b){
                    break;
                }else {
                    flag = true;
                    break;
                }
            }
            cout<<cnt<<endl;
        }else if(a  < b){
            continue;
        }else{
            cout<<0<<endl;
        }

    }
    return 0;
}
