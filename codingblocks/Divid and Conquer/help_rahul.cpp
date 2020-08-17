#include <bits/stdc++.h>
using namespace std;

int find_key(int arr[], int n, int k){
    int s = 0; int e = n-1; 
    while(s <= e){
        int mid = (s+e) / 2;
        if(arr[mid] == k){
            return mid;
        }
        else if(arr[s] <= arr[mid]){
            //check for two cases
            //if the element lies in left or right part
            if( k >= arr[s] and  k <= arr[mid]){
                e = mid - 1;
            }else{
                s = mid + 1;
            }
        }else{
            if(k <= arr[e] and k >= arr[mid]){
                s = mid + 1;
            }else{
                e = mid - 1;
            }
        }
    }
    return -1;
}



int main() {
    int arr[] = {5,4,1,2,3};
    cout<<find_key(arr, 5,2);
    return 0;
}
