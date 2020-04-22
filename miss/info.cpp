#include<bits/stdc++.h>
using namespace std;
static int count = 0;
int toInt(char s){
  return s - 'a';
}
/*
 * NOTE:= first generate all the sub strings possible
 *        then evaluate if the string is valid.
 *
*/
vector<int> bitSet(vector<int> set, int k){
  vector<int> vec;
  int n = set.size();
  int x = pow(2, n) - 1;
  for(int i = 0; i<= x; i++){
    if(__builtin_popcount(i) != k) continue;
      for(int j = 0; j < n; ++j){
        int z = 1<<j;
        if(z &  i){
          vec.push_back(set[j]);
        }
      }
  }
  return vec;
}

void isValid(vector<int> vec) {
  for(int i = 1; i < vec.size(); i++){
    if(vec[i-1] == vec[i]){
      break;
    }
  }
  count++;
}

int main(){
  string str = "1011";
  vector<int> vec;

  for(int i = 0; i< str.length(); i++)
    vec.push_back(toInt((char) str[i]));

  // lets get all the sub strings for k length.

  for(int i = 1; i< vec.size(); i++){
    vector<int> v;
    v = bitSet(vec,i);
    for(int j = 0; j < v.size(); ++j){
      vector<int> temp;
      for(int k = j; k < )
    }
  }
  cout<<count<<endl;
  return 0;
}
