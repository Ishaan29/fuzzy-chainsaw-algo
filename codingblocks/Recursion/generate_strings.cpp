#include <bits/stdc++.h>
using namespace std;

void generate_strings(char *in, char *out, int i, int j){
    if(in[i] == '\0'){
        out[j] = '\0';
        cout<<out<<endl;
        return ;
    }

    // recursve case
    int digit = in[i] - '0';
    if(digit != 0){
        char ch = digit + 'A' - 1;
        out[j] = ch;
        generate_strings(in,out, i+1, j+1);
    }else{
         generate_strings(in,out, i+1, j);
    }
    
    // 2 digits
    if(in[i+1] != '\0'){
        int secdigit = in[i+1] - '0';
        int no = digit*10 + secdigit;
        if(no <= 26){
            char c = no + 'A' - 1;
            out[j] = c;
            generate_strings(in, out, i+2, j+1);
        }
    }
    return;
}


int main(){
    char in[100] = "1022";
    char out[100];
    generate_strings(in, out, 0,0);
}
