#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin>>n;
  if(n == 1){
      cout<<1<<endl;
      return ;
  }
  if(n&1){
      cout<<(n/2) + 1<<endl;
  }else{
      cout<<(n/2)<<endl;
  }
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}

