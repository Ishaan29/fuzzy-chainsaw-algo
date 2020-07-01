#include <bits/stdc++.h>
using namespace std;
void ans() {
  string s; cin>>s;
  
  int move = 0;
  while(!s.empty()){
    int l = s.length();
    int z = 0; int o = 0;
    for(int i = 0; i < l; i++){
        if(s[i] == '0'){
            z++;
        }else{
            o++;
        }
    }
    if(z == l || o == l){
        break;
    }else{

        for(int i = 1; i < l; i++){
            if(s[i-1] == '0' && s[i] == '1'){
                move++;
                //deb(s);
                s.erase(i-1,1);
                s.erase(i-1,1);
                //deb(s); 
                break;           
                //i++;
            }else if(s[i-1] == '1' && s[i] == '0'){
                move++;
                //deb(s);
                s.erase(i-1,1);
                s.erase(i-1,1);
                //deb(s);
                break;
                //i++;
            }
        }
    }
  }
    //deb(move);
    if(move&1){
        cout<<"DA"<<endl;
    }else{
        cout<<"NET"<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t; cin >> t;
    while(t--) {
      ans();
    }

    return 0;
}
