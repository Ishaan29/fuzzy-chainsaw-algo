#include<bits/stdc++.h>
using namespace std;

void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/input.txt", "r", stdin);
    freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/output.txt", "w", stdout);
#endif
}

bool isPossible(vector<int> arr, int p, int a_time, int n){
    int curr_ans = 0;
    for(int i = 0; i < n; i++){
        int c_time = 0; int k = 1; int cnt = 0;
        while(c_time <= a_time){
            // cout<<"c_time"<<c_time<<endl;
            c_time += arr[i]*k;
            k++;
            cnt++;
        }
        cnt--;
        //cout<<"curr_ans"<<curr_ans<<endl;
        curr_ans += cnt;

    }
    if(curr_ans >= p){
        return true;
    }else{
        return false;
    }
}

int main() {
    c_p_c();
    int t; cin>>t;
    while(t--){
        int p; cin>>p;
        int n; cin>>n;
        vector<int> arr;
        for(int i = 0; i <n;i++){
            int temp; cin>>temp;
            arr.push_back(temp);
        }
        //b-search
        //--- find the search space(monotonus)
        int e = 0; int ans = 0;
        for(int i = 1; i <= p*arr[0]; i++) e+= i;
        int s = 0; 
        while(s <= e){
            int mid = (s+e)/2;
            //cout<<"mid "<<mid<<endl;
            bool possible = isPossible(arr,p,mid,n);
            if(possible){
                ans = mid;
                e = mid - 1;
            }else{
                s = mid + 1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
