#include<bits/stdc++.h>
using namespace std;

long long n,q, cnt1, cnt2, i, a[100021], b[100021], pos[100021];
int main(){
    ios_base::sync_with_stdio(false);
   	cin.tie(NULL);
    cin>>n;
    for(i = 0; i< n; i++){
        cin>>a[i];
        pos[a[i]] = i;
    }
    cnt1 = 0; cnt2 = 0;
    cin>>q;
    for(i = 0; i<q; i++)
        cin>>b[i];
    
    for(i = 0; i<q; i++){
        cnt1 += pos[b[i]]+1;
        cnt2 += n - pos[b[i]];
    }
    cout<<cnt1<<" "<<cnt2<<endl;
}
