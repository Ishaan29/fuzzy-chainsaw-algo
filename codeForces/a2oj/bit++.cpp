#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    int pcnt = 0; int ncnt = 0;
    while(t--){
        string s; cin>>s;
        for(int i = 0; i < s.length()-1; ++i){
            if(s[i] == '+' && s[i+1] == '+'){
                pcnt += 1;
            }
            if(s[i] == '-' && s[i+1] == '-'){
                ncnt += 1;
            }
        }
    }
    cout<<pcnt - ncnt<<endl;
}
