#include <bits/stdc++.h>
using namespace std;
int pow(int x, int n){
    if(n == 0){
        return  1;
    }
    int subprob = pow(x, n/2);
    if(n&1){
        return x * subprob * subprob;
    }
    return subprob * subprob;
}
int main(){
    int a; int n; cin>>a>>n;
    cout<<pow(a,n);
}
