#include<bits/stdc++.h>
using namespace std;

int main(){
    int T = 1; cin >>T;
    int c = 1;
    while(T--){
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        sort(s.begin(), s.end());

        if( s[0] != s[k-1]){
            cout<< s[k-1]<<endl;
        }else{
            if(s[k] == s[n-1]){
                int diff = n - k;
                cout<<s[0];
                for(int i =0; i< diff/k ; i++){
                    cout<< s[k];
                }
                if(diff % k != 0){
                    cout<<s[k];
                }
                cout<<endl;
            }else{
                cout<<s[0];
                for(int i = k; i < n; i++){
                    cout<<s[i];
                }
                cout<<endl;
            }
        }
    }
}
