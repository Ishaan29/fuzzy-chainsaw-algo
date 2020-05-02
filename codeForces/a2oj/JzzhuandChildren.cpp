#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ,c; cin>>n>>c;
    int a[n];
    queue<pair<int, int>> q;
    for(int i = 0; i< n; i++){
        cin>>a[i];
        q.push(make_pair(0,i));
    }
    int has, idx;
    while(!q.empty()){
        has = q.front().first;
        idx = q.front().second;
        has = has + c;
        if(has < a[idx]){
            q.pop();
            q.push(make_pair(has,idx));
        }else{
            q.pop();
        }
    }
    cout<<idx+1<<endl;
}
