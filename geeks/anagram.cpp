#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s1; cin>>s1;
    string s2; cin>>s2;
    map<char, int> mp; //freq map
    int len = s1.length();
    for(int i = 0; i < len; i++){
        if(mp.find(s1[i]) == mp.end()){
            mp.insert(pair<char, int>(s1[i], 1));
        }else{
            mp[s1[i]]++;
        }
    }
    for(int i = 0; i < s2.length(); i++){
        if(mp.find(s2[i]) != mp.end()){
            if(mp[s2[i]] > 0){
                mp[s2[i]]--;
            }else{
                cout<<"NO"<<endl;
                return;
            }
        }else{
            cout<<"NO"<<endl;
            return;
        }    
    }
    cout<<"YES"<<endl;
}



int main() {
	//code
	int T; cin>>T;
	while(T--){
	    solve();
	}
	return 0;
}
