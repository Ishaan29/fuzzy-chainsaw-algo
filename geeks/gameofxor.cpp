#include <bits/stdc++.h>
using namespace std;


int main() {
	//code
	int t; cin >>t;
	while(t--){
	    int n; cin>>n;
	    int arr[n];
	    for(int i = 0; i < n; i++){
	        cin>>arr[i];
	    }
	    int ans = 0;
	    for(int i = 0; i < n; i++){
            int x = 0;
	        for(int j = i; j < n; j++){
                //cout<<arr[j]<<" ";
                x = x ^ arr[j];
	        }
            ans = ans ^ x;
	    }
        for(int i = 0; i < n; i++){
            ans = ans ^ arr[i];
        }
	    cout<<ans<<endl;
	}
	return 0;
}
