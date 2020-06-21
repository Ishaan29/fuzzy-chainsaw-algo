#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int evn = 2; int odd = 1;
    if(n&1){
        cout<<-1<<endl;
        return 0;
    }
    for(int i = 0 ; i < n; i++){
        if(i&1){
            cout<<odd<<" ";
            odd += 2;
        }else{
            cout<<evn<<" ";
            evn += 2;
        }
    }
}
