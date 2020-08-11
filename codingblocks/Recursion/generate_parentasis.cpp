#include <bits/stdc++.h>
using namespace std;


void generate_paran(char *out, int n,int idx, int open, int close){
    //base case
    if(idx == 2*n){
        out[idx] = '\0';
        cout<<out<<endl;
        return;
    }
   
    if(close < open){
        out[idx] = ')';
        generate_paran(out, n, idx+1, open, close + 1);
    }
    //open bracket
    if(open < n){
        out[idx] = '(';
        generate_paran(out, n, idx + 1, open +1, close);
    }
   
   
    return;
}



int main() {
    int n = 2;// cin>>n;
    char out[10000];
    generate_paran(out, n, 0,0,0);

}
