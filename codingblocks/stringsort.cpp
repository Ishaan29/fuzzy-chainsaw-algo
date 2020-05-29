#include<bits/stdc++.h>
using namespace std;
bool compare(string a , string b){
   if(a.size() <= b.size() && b.substr(0, a.size()) == a) return false;
   else if (b.size()<= a.size() && a.substr(0, b.size()) == b) return true;
   else return a < b;
}
int main(){
    int n; cin>>n;
    vector<string> vs;
    while(n--){
        string s; cin>>s;
        vs.push_back(s);
    }
    sort(vs.begin(), vs.end(), compare);
    for(auto a: vs){
        cout<<a<<endl;
    }
}
