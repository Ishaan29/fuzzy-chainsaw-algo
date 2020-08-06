#include <bits/stdc++.h>
using namespace std;

int partation(int *arr, int s, int e){
    int i = s-1;
    int j = s;
    int p = arr[e];
    for(; j <= e-1; ){
        if(arr[j] <= p){
            i = i + 1;
            swap(arr[i], arr[j]);
        }
        j++;
    }
    swap(arr[i+1], arr[e]);
    return i+1;
}

void quickSort(int *arr, int s, int e){
    //base case
    if(s >= e){
        return;
    }
    int p = partation(arr, s, e);
    //left part
    quickSort(arr, s, p-1);
    //right part
    quickSort(arr, p+1, e);

}

int main() {
    int arr[] = {2,7,8,6,1,5,4};
    int n = sizeof(arr)/sizeof(int);
    quickSort(arr, 0, n-1);
    for(auto a: arr){
        cout<<a<<" ";
    }
    return 0;   
}
