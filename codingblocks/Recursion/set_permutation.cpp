#include <bits/stdc++.h>
using namespace std;


void permute(char in[], int i, set<string> &s){
    //base case
    if(in[i] == '\0'){
        string t(in);
        s.insert(t);
        return;
    }

    for(int j = i; in[j] != '\0'; j++){
        swap(in[i], in[j]);
        permute(in, i+1, s);
        //backtracking step
        swap(in[i], in[j]);
    }
}


int main(){
    char in[100] = "abc";
    set<string> s;
    permute(in,0,s);
    for(auto str: s){
        cout<<str<<endl;
    }
    return 0;
}
