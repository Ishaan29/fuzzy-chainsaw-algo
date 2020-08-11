#include <bits/stdc++.h>
using namespace std;

void generate_brackets(char *out, int n, int idx, int open, int close){
    //base_case
    if(idx == 2*n){
        out[idx] = '\0';
        cout<<out<<endl;
        return ; 
    }
    //select open
    if(open < n){
        out[idx] = '(';
        generate_brackets(out, n, idx+1, open+1, close);
    }
    //select close
   
}


int main(){
    int n; n = 3;
    char out[1000];
    
    generate_brackets(out, n, 0, 0, 0);
}
