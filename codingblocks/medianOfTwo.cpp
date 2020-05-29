// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n; cin>>n;
    
//     // vector<int> ans;
//     // for(int i = 0; i < 2*n; i++){
//     //     int t; cin>>t;
//     //     ans.push_back(t);
//     // }
//     // sort(ans.begin(), ans.end());
//     // cout<<ans[n-1];
//     /*
//     TECHNIQUE:= Two pointer
//     */
//     int a[n];
//     for(int i = 0; i<n; i++){
//         cin>>a[i];
//     }
//     int b[n];
//     for(int i = 0; i<n; i++){
//         cin>>b[i];
//     }
//     // vector<int> ans;
//     // int ai = 0; int bi = 0;
//     // for(int i = 0; i < 2*n; i++){
//     //     if(a[ai] <= b[bi]){
//     //         ans.push_back(a[ai]);
//     //         ai++;
//     //     }else{
//     //         ans.push_back(b[bi]);
//     //         bi++;
//     //     }
//     // }
//     // cout<<ans[n-1]<<endl;
//     /*
//         TECHNIQUE:= Binary Search
//     */
//     for(int i = 0; i<n; i++){

//     }


// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    pair<set<int>::iterator, bool> ret;
    s.insert(1);
    s.insert(5);
    s.insert(10);
    s.insert(3);
    ret = s.insert(10);
    cout<<ret.second<<endl;
    return 0;
}
