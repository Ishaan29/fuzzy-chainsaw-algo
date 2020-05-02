#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, x, ans, sum;

int main(){
    cin>>n;
    for(int i = 1; i<= n ; ++i){
        cin>>x;
        sum += x;
    }
    for(int i = 1; i<= 5; i++){
        if((sum+i)%(n+1) != 1){
            ans++;
        }
    }
    cout<<ans;
}
