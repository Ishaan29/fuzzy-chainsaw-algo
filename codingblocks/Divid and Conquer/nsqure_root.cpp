#include <bits/stdc++.h>
using namespace std;

float squre_root(int n){
    int s = 0; int e = n - 1; float ans = -1;
    int p = 3;
    while(s <= e){
        int mid = (s+e)>>1;
        if(mid * mid == n){
            return mid;
        }else if(mid * mid < n){
            ans = mid;
            s = mid + 1;
        }else{
            e = mid - 1;
        }
    }
    //for prescision;
    float inc = 0.1;
    for(int t = 1; t<= p; t++) {
        while(ans*ans <= n){
            ans = ans + inc;
        }
        //after this loop the value of ans overshoots
        ans = ans - inc;
        inc = inc /10;
    }
    return ans;

}


int main(){
    int n; n = 50;
    cout<<squre_root(n);
    return 0;
}
