
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	for(int i = n; i > 0; i--){
        for(int space = 0; space < n-i; space++){
            cout<<"  ";
        }
		for(int j = i; j >= 0; j--){
			cout<<j<<" ";
		}
		for(int k = 1; k < i+1; k++){
			cout<<k<<" ";
		}
        cout<<endl;
	}
    for(int i = 0; i<=n; i++){
        for(int space = n-i; space > 0; space--){
            cout<<"  ";
        }
        for(int j = i; j > 0; j--){
            cout<<j<<" ";
        }
        for(int k = 0; k <= i; k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
	return 0;
}
