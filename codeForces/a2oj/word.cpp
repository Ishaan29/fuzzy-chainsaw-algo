#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    int lc = 0; int uc = 0;

    for(int i = 0; i<s.length(); ++i){
        if(isupper(s[i])){
            uc++;
        }else{
            lc++;
        }
    }
    string ans = "";
    if(lc >= uc){
        //using lambda functions
       transform(s.begin(),
				s.end(),
				s.begin(),
				[&](unsigned char const &c){
					return ::tolower(c);
				});
    }else{
        transform(s.begin(),
				s.end(),
				s.begin(),
				[&](unsigned char const &c){
					return ::toupper(c);
				});
    }
    cout<<s<<endl;
    return 0;
}
