#include <bits/stdc++.h>
using namespace std;

int main(){
    float p; cin>>p;
    float x = 1.0;
    float dom = 365; float num = 365;
    int cnt = 0;
	if(p == 1.0){
		cout<<366<<endl;
		return 0;
	}
    while(x > 1-p){
        x = x*num/dom;
        num--;
        cnt++;
    }
    cout<<cnt<<endl;
}
