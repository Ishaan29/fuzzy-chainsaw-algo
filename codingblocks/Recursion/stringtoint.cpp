#include <bits/stdc++.h>
using namespace std;

int stringToInt(char *s, int n){
    //base case
    if(n == 0){
        return 0;
    }
    int a = s[n-1] - '0';
    return (stringToInt(s, n-1)*10) + a;

    
}

int main() {
    char s[] = "1234";
    int n = strlen(s);
    cout<<stringToInt(s, n);
    return 0;
}
