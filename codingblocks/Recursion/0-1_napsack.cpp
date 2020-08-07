#include <bits/stdc++.h>
using namespace std;

int profit(int n, int c, int *wt, int *prices){
    if(n == 0 || c == 0){
        return 0;
    }
    int inc, excl = INT_MIN;

    if(wt[n-1] <= c){
        inc = prices[n-1] + profit(n-1, c-wt[n-1], wt, prices);
    }
    excl = profit(n-1, c, wt, prices);

    return max(inc, excl);
}


int main(){
    int weights[] = {1,2,3,5};
    int prices[] = {40, 20, 30, 100};

    int n = sizeof(weights)/sizeof(int);
    int k = 7; // size of sack;
    cout<<profit(n, k, weights, prices)<<endl;

}
