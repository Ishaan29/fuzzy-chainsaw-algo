#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> ans;
    vector<pair<int, int>> query;
    int n; cin>>n;
    int m; cin>>m; // redundent value
    for(int i = 0; i<n; i++){
        int x,y; cin>>x>>y;
        query.push_back(pair<int, int>(x,y));
    }
    for(auto x: query){
        int sum = 0; int a = x.first; int b = x.second;
        int m = min(a, b); int area = a * b;
        for(int i = 1; i<=m; i++){
            sum += a*b;
            a -= 1; b-= 1;
        }
        ans.push_back(sum);
    }
    for(auto i: ans){
        cout<<i<<endl;
    }
    return 0;
}
