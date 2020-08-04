#include<bits/stdc++.h>
using namespace std;

// void c_p_c()
// {
//     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #ifndef ONLINE_JUDGE
//     freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/input.txt", "r", stdin);
//     freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/output.txt", "w", stdout);
// #endif
// }

int merge(int *arr, int s, int e){
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

int count_Inversion(int *arr, int s, int e){
    //base case
    if(s >= e){
        return 0;
    }
    int mid = (s+e)/2;
    int x = count_Inversion(arr, s, mid);
    int y = count_Inversion(arr, mid+1, e);
    int cross = merge(arr, s ,e);
    return x+y+cross;
}

int main() {
    //c_p_c();
    int arr[] = {1, 5, 2, 6, 3, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<count_Inversion(arr, 0, n-1); 
    return 0;

}
