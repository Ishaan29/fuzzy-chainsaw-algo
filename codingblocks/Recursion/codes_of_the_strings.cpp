#include <bits/stdc++.h>
using namespace std;
vector<string> ans;
void generate_str(string s, char *out, int i, int j){
    if(s[i] == '\0'){
        out[j] = '\0';
        ans.push_back(out);
        return;
    }
    //one digit
    int digit = s[i] - '0';
    char ch = digit + 'a' - 1;
    out[j] = ch;
    generate_str(s,out, i+1, j+1);

    //2 digits
    if(s[i+1] != '\0'){
        int seconddig = s[i+1] - '0';
        int no = digit * 10 + seconddig;
        if(no <= 26){
            char c = no + 'a' - 1;
            out[j] = c;
            generate_str(s,out,i+2,j+1);
        }
    }
    return;
}



int main(){
    string s; cin>>s;
    char out[s.length()];
    generate_str(s,out,0,0);
    cout<<"[";
    for(int i = 0; i < ans.size(); i++){
        if(i == ans.size()-1){
            cout<<ans[i]<<"]";
            continue;
        }
        cout<<ans[i]<<", ";
    }
    return 0;
}
