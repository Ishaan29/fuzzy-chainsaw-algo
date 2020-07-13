/**
 * Author: Ishaan Bajpai
**/
#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
const int mod = 1'000'000'007;
const int N = 3e5, M = N;
//=======================
ll int pow(ll int x, ll int n,ll int mod){
    if(n == 0){
        return  1;
    }
    ll int subprob = pow(x, n/2, mod)%mod;
    if(n&1){
        return (x * subprob * subprob)%mod;
    }
    return (subprob * subprob)%mod;
}
void solve() {
    /**
     * NOTE :=
     * TODO :=  
    */
   int k; cin>>k;
   for(int i = 0; i < 8; i++){
       for(int j = 0; j < 8; j++){
           if(i == 0 && j == 0){
               cout<<"O";
               k--;
               continue;
           }
           if(k > 0){
               cout<<".";
               k--;
           }else{
               cout<<"#";
           }
       }
       cout<<endl;
   }
}
//    k--;
//    char board[8][8];
//    for(int i = 0; i < 8; i++){
//        for(int j = 0; j < 8; j++){
//            board[i][j] = 'X';
//        }
//    }
//    board[3][3] = 'O';
//    while(k>0){
//        for(int a = 4; a < 8; a++){
//            if(k > 0){
//                board[3][a] = '.';
//                k--;
//            }
//        }
//        for(int b = 2; b >= 0; b--){
//            if(k > 0){
//                board[3][b] = '.';
//                k--;
//            }
//        }
//        for(int l = 2; l >= 0; l--){
//            for(int i = 0; i < 8; i++){
//                if(k > 0){
//                    board[l][i] = '.';
//                    k--;
//                 }
//             }
//        }

//        for(int l = 4; l < 8; l++){
//            for(int i = 0; i < 8; i++){
//                if(k > 0){
//                    board[l][i] = '.';
//                    k--;
//                }
//            }
//        }
       //deb(k);
        
    //    for(int c = 4; c < 8; c++){
    //        if(k > 0){
    //            board[c][3] = '.'; 
    //            k--;
    //        }
    //    }
    //    for(int d = 2; d >=0; d--){
    //        if(k > 0){
    //            board[d][3] = '.';
    //            k--;
    //        }
    //    }

//    }
//    for(int i = 0; i < 8; i++){
//        for(int j = 0; j < 8; j++){
//            for(int a = 3; a < 8; a++){
//                if(k > 0){
//                    board[i][a] = '.';

//                }
//            }
//        }
//    }

//    for(int i = 0; i < 8; i++){
//        for(int j = 0; j < 8; j++){
//           cout<<board[i][j];
//        }
//        cout<<endl;
//    }
//    cout<<endl;




int main() {
    c_p_c();
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}

// int arr[8][8];
// int k; cin>>k;
// for(int i = 0; i < 8; i++){
//     for(int j = 0; j < 8; j++){
//         if(i = 0 && j = 0){
//             cout<<"O";
//             continue;
//         }
//         if(k > 0){
//             cout<<".";
//             k--;
//         }else{
//             cout<<"X";
//         }
//     }
//     cout<<endl;
// }
