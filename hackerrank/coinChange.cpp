#include <bits/stdc++.h>
using namespace std;
static int coins[] = {10, 6, 1};
/*
  NOTE:= top down dp;
 */
int makeChangeUtil(int c){
  int cache[ c + 1];
  for(int i = 1; i< c + 1; i++){
    cache[i] = -1;
  }
  return makeChange(c, cache);
}

int makeChange(int c, int cache[]){

  //base case
  if(cache[c] >= 0 ) return cache[c];
  int minCoins = INT_MIN;

  for(int coin: coins){
    if(c - coin >= 0){
    int currMin = makeChange(c - coin, cache);
    minCoins = min(currMin , minCoins);
  }
  }
  cache[c] = minCoin + 1;
  return cache[c];
}


/*
   NOTE:= bottom up dp.
*/

int makeChange(int c){
  int cache[c+1];
  for(int i = 1; i< c; ++i){
    int minCoin = INT_MIN;
    for(int coin: coins){
      int currMin = cache[i - coin] + 1;
      minCoin = min(currCoin, minCoin);
    }
    cache[i] = minCoin;
  }
  return cache[c]
}
int main(){

}
