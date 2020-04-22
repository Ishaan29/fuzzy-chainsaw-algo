#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    int test_case = 1;
    while(t--){
        int x,amount; cin>>x>>amount;
        int arr[x];
        int cnt = 0;
        for(int i = 0; i < x; ++i){
            int tmp; cin>>tmp;
            arr[i] = tmp;
        }
        sort(arr, arr+x);
        for(int el: arr){
            if(amount - el>= 0){
                amount -= el;
                cnt++;
            }
        }
        cout<<"Case #"<<test_case<<": "<<cnt<<endl;
        test_case++;
        
    }
}
