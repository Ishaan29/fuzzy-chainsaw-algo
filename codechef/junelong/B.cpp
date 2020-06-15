#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    for(int k = 0; k < t; k++){
        string s; cin>>s;
        //int x = 0; int y = 0;
        int cnt = 0;
        for(int i = 1; i < s.length(); ){
            if(s[i-1] == 'x' && s[i] == 'y'){
                cnt++;i += 2;
            }else if(s[i] == 'y' && s[i-1] == 'x'){
                cnt++;i += 2;
            }else{
                i++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
