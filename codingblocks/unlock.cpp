#include <bits/stdc++.h>
using namespace std;
void bestpermutation(int arr[], int k, int n) 
{ 
    // Storing the elements and 
    // their index in map 
    unordered_map<int, int> h; 
    for (int i = 0; i < n; i++) { 
        h.insert(make_pair(arr[i], i)); 
    } 
  
    // If number of swaps allowed 
    // are equal to number of elements 
    // then the resulting permutation 
    // will be descending order of 
    // given permutation. 
    if (n <= k) { 
        sort(arr, arr + n, greater<int>()); 
    } 
    else { 
  
        for (int j = n; j >= 1; j--) { 
            if (k > 0) { 
  
                int initial_index = h[j]; 
                int best_index = n - j; 
  
                // if j is not at it's best index 
                if (initial_index != best_index) { 
  
                    h[j] = best_index; 
  
                    // Change the index of the element 
                    // which was at position 0. Swap 
                    // the element basically. 
                    int element = arr[best_index]; 
                    h[element] = initial_index; 
                    swap( 
                        arr[best_index], 
                        arr[initial_index]); 
  
                    // decrement number of swaps 
                    k--; 
                } 
            } 
        } 
    }
    for(int i =0; i < n;i++){
        cout<<arr[i]<<" ";
    } 
} 
int main() {
    int n, k; cin>>n>>k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    bestpermutation(arr, k, n);
    
}
