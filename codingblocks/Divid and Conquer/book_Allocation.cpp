#include <bits/stdc++.h>
using namespace std;



bool checkPossible(int arr[], int n, int m){
    
}
int main(){
    int n = 4;
    int m = 2; //number of partitations
    int arr[] = {10,20,30,40}; // sorted 

    int cnt = 0;
    for(int i = 0; i < n; i++){
        cnt += arr[i];
    }

    //serch space
    int s = arr[n-1];
    int e = cnt;
    //binary search

    while(s <= e){
        int mid = (s+e) / 2;
        boll isPossible = checkPossible(arr, n, mid);
        if(isPossible){
            ans = mid;
            s = mid + 1;
        }else{
            e = mid - 1;
        }
    }

}