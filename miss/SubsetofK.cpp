// Problem is to generate all the K length subset of
// a given set.
// Ex: [1,2,3,4] with length K = 3
// output: [1,2,3],[2,3,4],[1,3,4]
#include<bits/stdc++.h>
using namespace std;
void bitSet(vector<int> set, int k){
    int n = set.size();
    int x = pow(2,n) -1;//2^n - 1 bits.
    for(int i = 0; i<=x; ++i){
        //__builtin_popcount(i) : return's the number of 1's in a binary of number;
        if(__builtin_popcount(i) != k) continue;
        for(int j = 0; j<n; ++j){
            auto z = 1<<j; // right shift
            if (z & i){ // to find all the number of set which are set as on in bitmask.
                cout<<set[j]<<" ";
            }
        }
        cout<<endl;
    }
}


int main(){
    vector<int> vect;
    vect.push_back(1);
    vect.push_back(0);
    vect.push_back(1);
    vect.push_back(0); 

}
