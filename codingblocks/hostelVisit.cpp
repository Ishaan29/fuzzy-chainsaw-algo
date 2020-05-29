#include <bits/stdc++.h>
using namespace std;

int main(){
    int q, k; cin>>q>>k;
    priority_queue<long long int> pq;
    while(q--){
       long long int a,x,y; cin>>a;
        if(a == 1){
            // cout<<"inserted"<<endl;
            cin>>x>>y;
            pq.push((x*x) + (y*y));
        }else{
            while(pq.size() > k){
                // cout<<"called"<<endl;
                // cout<<pq.top()<<endl;
                pq.pop();
            }
            cout<<pq.top()<<endl;
        }
    }
    return 0;
}
