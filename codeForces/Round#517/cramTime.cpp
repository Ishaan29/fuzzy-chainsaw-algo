#include<bits/stdc++.h>
using namespace std;

void print_set(vector<int> A){
    cout<< A.size() << "\n";
    for(int x : A){
        cout<< x<<" ";
    }
    cout<<"\n";
}

int main(){
    int a,b;
    cin>>a>>b;
    int s = a + b;
    int used = 0;
    int k = 1;
    while(used + k <= s){
        used += k;
        ++k;
    }
    --k;
    vector<int> A,B;
    for(int i = k; i >= 1; --i){
        if(i <= a){
            A.push_back(i);
            a -= i;
        }else{
            B.push_back(i);
            assert(b>=1);
            b -= i;
        }
    }
    print_set(A);
    print_set(B);
}
