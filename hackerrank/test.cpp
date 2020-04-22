#import<bits/stdc++.h>
using namespace std;

int largestSquare(bool arr[][]){
  //initilize the array.
  int cache[arr.length][arr[0].length];
  int m = 0;
  for(int i = 0; i< arr.length; ++i){
    for(int j = 0; j< arr[0].length; ++j){
      if(i == 0 || j == 0){
        cache[i][j] = arr[i][j] ? 1 : 0;
      }else if(arr[i][j]){
        cache[i][j] = 1 + min(min(cache[i][j-1], cache[i-1][j]), cache[i-1][j-1]);
      }
      m = max(cache[i][j], m);
    }
  }
  return m;
}
