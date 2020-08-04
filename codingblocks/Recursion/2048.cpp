#include <bits/stdc++.h>
using namespace std;
vector<string> words = {"zero","one","two", "three", "four", "five", "six", "seven", "eight", "nine"};
void printspellings(int n){
    if(n == 0){
        return;
    }
    int a = n%10;
    printspellings(n/10);
    cout<<words[a]<<" ";
    
}
int main(){
    int n = 2048;
   printspellings(n);
   //cout<<words[0];
    return 0;
}
