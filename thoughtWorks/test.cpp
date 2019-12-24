#include <iostream>
using namespace std;
int main() {
  char a[7];
  char b[7];
  for(int i = 0; i< 6; ++i) cin>>a[i];
  // for(int i = 0; i< 6; ++i) cin>>b[i];
  int x[6] = {0}; int y[6] = {0};
  int sth = 0; int dy = 0; int dx = 0;
  for(int i = 0; i<6; i++){
    int temp = a[i] - '0';
    if(a[i] != 'B' && ((temp % 2) != 0) && sth == 0){
      sth = 1;
      x[dx] += temp;
      //cout<<temp<<" ";
      continue;
    }else if(a[i] != 'B' && ((temp % 2) != 0) && sth == 1){
      sth = 0;
      y[dy] += temp;
      //cout<<temp<<" ";
      continue;
    }else if(a[i] != 'B' && ((temp % 2) == 0) && sth == 0){
      x[dx] += temp;
      //cout<<temp<<" ";
      continue;
    }else if(a[i] != 'B' && ((temp % 2) == 0) && sth == 1){
      y[dy] += temp;
      //cout<<temp<<" ";
      continue;
    }else if(a[i] == 'B' && sth == 0){
      dx++;
      continue;
    }else if(a[i] == 'B' && sth == 1){
      dy++;
      continue;
    }

  }
  int sum = 0;
  for(int i = 0; i<6; i++){
    if(x[i] != 0){
      sum += x[i];
      cout<<x[i]<<" ";
    }
  }
  for(int i = 0; i<6; i++){
    if(y[i] != 0){
      sum += y[i];
      cout<<y[i]<<" ";
    }
  }
  cout<<sum<<endl;
  return 0;
}
