#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while (t--){
        int n,k; cin>>n>>k;
        int ans = 0;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        if(k == 1){
            for(int i = 0; i < n; i++){
                //  cout<<"called"<<endl;
                if(arr[i]&1){
                   
                    cout<<"Yes"<<endl;
                    break;
                }
            }
            cout<<"No"<<endl;
        }else{
            ans = 0;
            int vis[n];
            for(int i = 0; i < k; i++){
                if(ans&1){
                    for(int j = 0; j < n; j++){
                        // cout<<"Called even"<<endl;
                        if((arr[j]%2 == 0) && vis[j] == 0){
                            ans += arr[j];
                            vis[j] = 1;
                            break;
                        }
                    }
                }else{
                    for(int j = 0; j < n; j++){
                        // cout<<"called odd"<<endl;
                        if((arr[j]&1) && (vis[j] == 0)){
                            ans += arr[j];
                            vis[j] = 1;
                            break;
                        }
                    }
                }
            }
            if(ans&1){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }
    }
    
}
