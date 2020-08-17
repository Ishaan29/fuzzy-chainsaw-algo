#include <bits/stdc++.h>
using namespace std;

int first_occ(int arr[], int n, int k){
    int s = 0; int e = n-1; int ans = -1;

    while(s <= e){
        int mid = (s+e) / 2; // can overflow
        if(arr[mid] == k){
            ans = mid;
            e = mid - 1;
        }else if(arr[mid] >  k){
            e = mid -1;
        }else{
            s = mid + 1;
        }
    }
    return ans;
}


int main(){
    int arr[] = {1,2,3,4,8,8,8,8,8,10,12};
    int n = 11;
    cout<<first_occ(arr, n,8)<<endl;
    cout<<lower_bound(arr,arr+n, 8)-arr;
    return 0;
}
