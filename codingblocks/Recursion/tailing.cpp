#include <bits/stdc++.h>
using namespace std;

int countBriks(int n){
    //base case
    if(n <= 3){
        return 1;
    }
    return countBriks(n-1) + countBriks(n-4);
}

int main() {
    int n = 16;
    cout<<countBriks(n);
    return 0;
}
