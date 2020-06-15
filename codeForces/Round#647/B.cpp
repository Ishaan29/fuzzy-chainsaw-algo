#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        //cout<<"value of n "<<n<<endl;
        int arr[n];
        vector<int> pos(1500,0);
        for(int i = 0; i < n; i++){
            int a; cin>>a;
            arr[i] = a;
        }
        for(int i = 0; i < n; i++){
            pos[arr[i]] = 1;
        }
        int mcnt = 0;
        for(int i = 1; i < 1025; i++){
            //cout<<"called "<<i<<endl;
            int cnt = 0;
            for(int j = 0; j < n; j++){
                if(pos[(arr[j]^i)]){
                    cnt++;
                }
            }
            if(cnt == n){
                cout<<i<<endl;
                mcnt = cnt;
                break;
            }
        }
        if(mcnt == 0){
            cout<<-1<<endl;
        }
    }
    return 0;
}
