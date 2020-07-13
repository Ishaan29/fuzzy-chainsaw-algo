#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i =0; i < n; i++){
        int t; cin>>t;
        arr[i]= t;
    }
    if(n > 70){
        cout<<"YES"<<endl;
        return 0;
    }else{
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                for(int k = 0; k < n; k++){
                    for(int l = 0; l < n; l++){
                        if((i != j && i != k && i != l) && ( j != i && j != k &&  j != l) && (l != i && l != j && l != k) && (k != i && k != j && k != l)){
                            if((arr[i]^arr[j]^arr[k]^arr[l]) == 0){
                                cout<<"YES"<<endl;
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }

    cout<<"NO"<<endl;

}
