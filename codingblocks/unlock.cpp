#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k; cin>>n>>k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int pos[n+1];
    for(int i = 0; i < n; i++){
        pos[arr[i]] = i;
    }
    for(int i = 0; i < n && k; i++){
        if(arr[i] == n-1){
            continue;
        }
        int temp = pos[n-i];
        pos[arr[i]] = pos[n-i];
        pos[n-i] = i;

        swap(arr[temp], arr[i]);
        k--;
    }
    for(auto a: arr){
        cout<<a<<" ";
    }
}
