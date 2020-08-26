#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool check(vector<int> arr, int n, int k, ll int mid ){
    ll int cnt = 1; ll int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(sum > mid){
            cnt++;
            sum = arr[i];
        }

    }
    if(cnt > k){
        return false;
    }else{
        return true;
    }
}

int main(){
    int k; cin >>k;  int n; cin>>n;
    vector<int> arr;
    int m = INT_MIN;
    for(int i =0; i < n; i++){
        int t; cin >>t;
        arr.push_back(t);
        if(t >= m){
            m = t;
        }
    }
    //--find the serch space 
     int s = m; int e = 0;
    for(auto a: arr) e += a;
    ll int ans = 0;
    while(s <= e){
        ll int mid = s+(e-s)/ 2;
        //cout<<"MID "<<mid<<endl;
        bool isPossible = check(arr,n,k,mid);
        //cout<<"POSSible "<<isPossible<<endl;
        if(isPossible){
            ans = mid;
            e = mid - 1;
        }else{
            s = mid + 1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
