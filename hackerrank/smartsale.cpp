#include<bits/stdc++.h>

using namespace std;

int main(){ 
    int N; cin>>N;
    map<int,int> freq;
    //map init.
    for(int i = 0; i<N; i++){
        int temp; cin>>temp;
        if(freq.find(temp) != freq.end()){
            freq.insert(pair<int, int>(temp, 1));
        }else{
            freq[temp]++;
        }
    }
    int m; cin>>m;
    // calculation
    priority_queue <int, vector<int>, greater<int>> pq;
    for(auto el: freq){
        pq.push(el.second());
    }
    for(int i = 0; i < m; i++){
        if(pq.top() == 0){
            pq.pop();
        }else{
            pq.top()--;
        }
    }
    int ans = pq.size();
    cout<<ans;


}
