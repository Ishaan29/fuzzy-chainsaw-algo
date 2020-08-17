#include <bits/stdc++.h>
using namespace std;


int binarySearch(int arr[], int n, int k){
    int s = 0; int e = n-1;
    while(s <= e){
        int mid = (s+e)/2;
        if(arr[mid] == k){
            return mid;
        }else if(arr[mid] < k){
            s = mid + 1;
        }else {
            e = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int k = 19;
    cout<<binarySearch(arr, 10, k);
    return 0;
}
