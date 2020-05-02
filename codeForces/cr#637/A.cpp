#include<bits/stdc++.h>
using namespace std;
bool test(){
    int n; scanf("%d", &n);
    vector<int> p(n);
    for(int i = 0; i < n; ++i){
        scanf("%d", &p[i]);
    }
    int need = 1;
    int up_to = n - 1;
    for(int i = n - 1; i >= 0; --i){
        if(p[i] == need){
            for(int j = i + 1; j <= up_to; ++j){
                if (p[j] != p[j-1] + 1){
                    return false;
                }
            }
            need -= up_to;
            up_to  = i -1;
            need += up_to;

        }
    }
    return true;
}
int main(){
    int t; cin>>t;
    while(t--){
        //cout<<t;
        cout<< (test() ? "Yes" : "No");
    }
    return 0;
}
