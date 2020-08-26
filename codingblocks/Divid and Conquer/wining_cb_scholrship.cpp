#include <bits/stdc++.h>
using namespace std;

bool isPossible(int x, int y, int n, int m, int mid){
    if(mid*x <= m + (n - mid)*y){
        return true;
    }else{
        return false;
    }
}


int main(){
    int n;cin>>n;
    int m;cin>>m;
    int x;cin>>x;
    int y;cin>>y;
    //-- find the search space
    int s = 0; int e = n;
    int ans = 0;
    while(s <=e){
        int mid = (s+e)/2;
        bool possible = isPossible(x,y,n,m,mid);
        if(possible){
            ans = mid;
            s = mid + 1;
        }else{
            e = mid - 1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
