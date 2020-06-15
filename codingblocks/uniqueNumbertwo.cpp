#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    //find the first unique number
    //take the xor of all the number
    int xr = 0;
    for(int i = 0; i < n; i++){
        xr = xr ^ arr[i];
    }
    //cout<<"xor "<< xr<<endl;
    //now fint the position of first unique set bit
    int cxr = xr; int pos = -1;
    for(int i = 0; i < n; i++){
        if(cxr&(1<<i)){
            pos = i;
            break;
        }
    }
    //cout<<pos<<endl;
    int a = 0;
    for(int i = 0; i < n; i++){
        if(arr[i]&(1<<pos)){
            a = a ^ arr[i];
        }
    }
    int b = xr^a;
    cout<<min(a,b)<<" "<<max(a,b)<<endl;

}
