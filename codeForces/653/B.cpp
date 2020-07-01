#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin>>n;
  bool flag = false;
  int cnt = 0;
  while(n > 1){
      if(n%6 == 0){
          n /= 6;
          cnt++;
      }else if(n%6 == 3){
          n *= 2;
          cnt++;
      }else{
          flag = true;
          break;
      }
  }
  if(!flag){
      cout<<cnt<<endl;
  }else{
      cout<<-1<<endl;
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

