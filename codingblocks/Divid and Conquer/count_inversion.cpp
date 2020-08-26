#include <bits/stdc++.h>
using namespace std;

void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/input.txt", "r", stdin);
    freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/output.txt", "w", stdout);
#endif
}


int merge(vector<int> &arr, int s, int e){
    //merge is a two ponter techineque 
    int mid = (s+e)/2;
    int i = s;
    int j = mid + 1;
    int k = s;

    int tmp[100000];
    int cnt = 0;

    while ( i <= mid and j <= e){
        if(arr[i] <= arr[j]){
            tmp[k] = arr[i];
            k++;
            i++;
        }else{
            tmp[k++] = arr[j++];
            cnt += mid - i + 1;
        }
    }
    while(i <= mid){
        tmp[k++] = arr[i++];
    }
    while(j <= e){
        tmp[k++] = arr[j++];
    }
    for(int i = s; i <= e; i++){
        arr[i] = tmp[i];
    }
    return cnt;
}
int count_Inversion(vector<int> &arr, int s, int e){
    if(s >= e){
        return 0;
    }
    int mid = (s+e)/2;
    int x = count_Inversion(arr, s, mid);
    int y = count_Inversion(arr, mid+1, e);
    int cross = merge(arr, s ,e);
    return x+y+cross;
}


void solve(){
    int n; cin>>n;
    vector<int> arr;
    for(int i = 0; i < n; i++){ int t; cin>>t; arr.push_back(t);}
    cout<<count_Inversion(arr,0,n-1)<<endl;
    return ;
}


int main(){
    c_p_c();
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
