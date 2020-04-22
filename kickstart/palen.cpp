// #include<bits/stdc++.h>
// using namespace std;
// bool solve(int l, int r, vector<char> arr){
//     int s = arr.size();
//     map<char, int> m;// frequency map.
//     for(int i = l-1; i< r; i++){
//         if(m.find(arr[i]) == m.end()){
//             m.insert(pair<char, int>(arr[i],1));
//         }else{
//             m[arr[i]]++;
//         }
//     }
//     // freq map done.
//     //calculation begins.
//     int tol = 0;
//     for(auto el: m){
//         if(el.second == 1){
//             tol++;
//         }
//         if(el.second % 3 == 0){
//             tol++;
//         }
//     }
//     if(tol > 1){
//         return false;
//     }else{
//         return true;
//     }
// }
// int main(){
//     int t; cin>>t;
//     int case_count = 0;
//     int count = 0;
//     vector<int> ans;
//     while(t--){
//         count = 0;
//         int n,m; cin>>n>>m;
//         vector<char> arr;
//         for(int i = 0; i< n; ++i){
//             char temp; cin>>temp;
//             arr.push_back(temp);
//         }
//         while(m--){
//             int l,r; cin>>l>>r;
//             if(solve(l,r,arr)){
//                 count++;
//             }
//         }
//         ans.push_back(count);
//     }
//     for(int i =0; i< ans.size(); i++){
//         cout<<"Case #"<<i+1<<": "<<ans[i]<<"\n";
//     }
    
//     return 0;
// }

  
// #include<bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int T;
//     cin >> T;
//     int n,q;
//     for (size_t t = 1; t <= T; t++)
//     {
//         cin >> n >> q;
//         string s;
//         cin >>s;
//         vector<int> ch[26];
//         for (size_t i = 0; i < s.size(); i++)
//         {
//             ch[s[i]-'A'].push_back(i+1);
//             // cout<<s[i]-'A'<<" ";
//         }
//         int y =0;
//         while (q --)
//         {
//             int l,r;
//             cin >>l >> r;
//             int odd =0;
//             // cout<<endl<<"query : "<< q<<endl;
//             // cout<<"................"<<endl;
//             for(int i=0 ; i< 26 ; ++i)
//             {
//                 int cnt = upper_bound(ch[i].begin(),ch[i].end(),r) - lower_bound(ch[i].begin(),ch[i].end(),l);
//                 // cout << (char)('A'+i) << " : " <<cnt << "\n"; 
//                 if(cnt &1)odd ++;
//             }
//             y += (odd <=1);
//         }

//         cout << "Case #"<<t << ": "<<y << "\n";
//     }
    
        
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    int n,q;
    for(int x = 0; x<t; x++){
        cin>>n>>q;
        string s; cin>>s;
        vector<int> ch[26];
        for(size_t i = 0; i < s.size(); i++){
            ch[s[i]-'A'].push_back(i+1);
        }
        int y = 0;
        for(int z = 0; z<q; z++){
            int l,r; cin>>l>>r;
            int odd = 0;
            for(int i = 0; i<26; i++){
                int cnt = upper_bound(ch[i].begin(), ch[i].end(), r) - lower_bound(ch[i].begin(), ch[i].end(), l);
                if(cnt &1) odd++;
            }
            y += (odd<=1);
        }
        cout << "Case #"<<x+1 << ": "<<y<< "\n";
    }
    return 0;
}
