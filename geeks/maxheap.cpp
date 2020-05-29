#include<bits/stdc++.h>
using namespace std;

int findnth(vector<int> &A, int k){
    priority_queue<int, vector<int>, greater<>> pq(A.begin(), A.begin() + k);
    for(int i = k; i < A.size(); i++){
        if(A[i] > pq.top()){
            pq.pop();
            pq.push(A[i]);
        }
    }
    return pq.top();
}

int main() {
	//code
	int t; cin>>t;
	while(t--){
	    int n,k; cin>>n>>k;
	    vector<int> arr;
	    for(int i = 0; i<n; i++){
	        int temp; cin>>temp;
	        arr.push_back(temp);
	    }
	    cout<<findnth(arr,k)<<" ";
	    cout<<endl;
	}
	return 0;
}
