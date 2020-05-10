#include<bits/stdc++.h>
using namespace std;

int main(){
    int T; cin>>T;
    while(T--){
        int n; cin>>n;
        int left = 0; 
        int right = 0;
        int lft = 0;
        int rt = 0;
        right = pow(2,n); rt++;
        //cout<<right;
        for(int i = pow(2,n-1); i >= 2; i /= 2){
            //cout<<i<<endl;
            if(left <= right && lft < n/2){
                left += i;
                lft++;
            }else{
                right += i;
                rt++;
            }
        }
        //cout<<endl;
        //cout<<left<<" "<<right<<endl;
        cout<<abs(right - left)<<endl;
    }
}
