#include<bits/stdc++.h>
using namespace std;

int main() {
    string s; cin>>s;
    long int cnt = 0;
    for(int i = 0; i<s.length(); ++i){
        if(s[i] == '7' || s[i] == '4') {
            cnt++;
        }
    }
    bool status = true;
    long int tcnt = cnt;
    while(cnt>0){
        if(cnt%10 != 4 && cnt%10 != 7){
            status = false;
            break;
        }
        cnt = cnt/10;
    }
    if(status && tcnt != 0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
