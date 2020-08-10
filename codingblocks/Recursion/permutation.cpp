#include <bits/stdc++.h>
using namespace std;


void permute(char *in, int i){
    //base case
    if(in[i] == '\0'){
        cout<<in<<endl;
        return;
    }

    for(int j = i; in[j] != '\0'; j++){
        swap(in[i], in[j]);
        permute(in, i+1);
        //backtracking step
        swap(in[i], in[j]);
    }
}


int main(){
    char in[100] = "abc";
    permute(in,0,s);
    return 0;
}
