#include <bits/stdc++.h>
#include <cstring>
#include <sstream>
using namespace std;
// #define INF 10e9 + 5
int main() {
    string s1; getline(cin, s1);
    string s2; getline(cin, s2);
    int mlen = 10000000;
    if(s1.length() < s2.length()){
        cout<<"NO"<<endl;
    }
    map<char, int> freq;
    for(int i = 0; i < s2.length(); i++){
        if(freq.find(s2[i]) == freq.end()){
            freq.insert(pair<char, int>(s2[i], 1));
        }else{
            freq[s2[i]]++;
        }
    }
    for(int i = 0; i < s1.length(); i++){
        if(freq.find(s1[i]) != freq.end()){
            if(freq[s1[i]] != 0){
                freq[s1[i]]--;
                
            }
        }
    }
    if()
    
}
