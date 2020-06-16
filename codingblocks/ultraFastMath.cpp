#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s1; cin>>s1;
        string s2; cin>>s2;
        vector<int> ans; 
        //cout<<s1<<s2<<endl;
        for(int i = 0; i < s2.length(); i++){
            //cout<<((s1[i])^(s2[i]))<<endl;
            int temp = (s1[i])^(s2[i]);
            //cout<<temp<<endl;
            ans.push_back(temp);
        }
        for(auto a: ans){
            cout<<a;
        }
        cout<<endl;
    }
}
