// /**
//  * Author: Ishaan Bajpai
// **/
// #include<bits/stdc++.h>
// using namespace std;
// #define gc getchar_unlocked
// #define fo(i,n) for(i=0;i<n;i++)
// #define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
// #define ll long long
// #define si(x)	scanf("%d",&x)
// #define sl(x)	scanf("%lld",&x)
// #define ss(s)	scanf("%s",s)
// #define pi(x)	printf("%d\n",x)
// #define pl(x)	printf("%lld\n",x)
// #define ps(s)	printf("%s\n",s)
// #define deb(x) cout << #x << "=" << x << endl
// #define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
// #define pb push_back
// #define mp make_pair
// #define F first
// #define S second
// #define all(x) x.begin(), x.end()
// #define clr(x) memset(x, 0, sizeof(x))
// #define sortall(x) sort(all(x))
// #define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
// #define PI 3.1415926535897932384626
// typedef pair<int, int>	pii;
// typedef pair<ll, ll>	pl;
// typedef vector<int>		vi;
// typedef vector<ll>		vl;
// typedef vector<pii>		vpii;
// typedef vector<pl>		vpl;
// typedef vector<vi>		vvi;
// typedef vector<vl>		vvl;

// void c_p_c()
// {
//     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #ifndef ONLINE_JUDGE
//     freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/input.txt", "r", stdin);
//     freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/output.txt", "w", stdout);
// #endif
// }
// const int mod = 1'000'000'007;
// const int N = 3e5, M = N;
// //=======================
// ll int pow(ll int x, ll int n,ll int mod){
//     if(n == 0){
//         return  1;
//     }
//     ll int subprob = pow(x, n/2, mod)%mod;
//     if(n&1){
//         return (x * subprob * subprob)%mod;
//     }
//     return (subprob * subprob)%mod;
// }
// void solve() {
    
//     string p = "";
//     char c;
//     for(int i = 0; i < 7; i++){
//         cin>>c;
//         p.push_back(c);
//     }
//     int n; cin>>n;
//     int t = 0;
//     string s = "";
//     s += p[0];
//     s += p[1];
//     s += p[3];
//     s += p[4];
//     int a = stoi(s);
//     if(p[5] == 'P'){
//         a = a + 1200;
//        // cout<<"a"<<a<<endl;
//     }else if(p[0] == '1' && p[1] == '2' && p[5] == 'A'){
//         a = a - 1200;
//     }
//     cout<<"a "<<a<<endl;
//     for(int i = 0; i < n; i++){
//         string t1;
//         char ch;
//         for(int i = 0; i < 7; i++){
//             cin>>ch;
//             p.push_back(ch);
//         }
//         /// for t1
//         string t1s = "";
//         t1s += t1[0];
//         t1s += t1[1];
//         t1s += t1[3];
//         t1s += t1[4];
//         int x = stoi(t1s);
//         if(t1[5] == 'P'){
//             x = x + 1200;
//         // cout<<"a"<<a<<endl;
//         }else if(t1[0] == '1' && t1[1] == '2' && t1[5] == 'A'){
//             x = x - 1200;
//         }
//         cout<<x;
//         /// end t1

//     }


//     //cout<<a<<endl;

// }

// int main() {
//     c_p_c();
//     int t = 1;
//     cin >> t;
//     while(t--) {
//       solve();
//     }

//     return 0;
// }


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
    freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/input.txt", "r", stdin);
    freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/output.txt", "w", stdout);
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

int calch(string time_my, int t)
{
    int qwerty;
    qwerty = 10 *(time_my[0 + t] - '0') + 1* (time_my[1 + t] - '0');
    if(time_my[6+t] == 'P'){if(qwerty != 12) qwerty += 12;}
    if(time_my[6 + t] == 'A') {if(qwerty == 12) qwerty-= 12;}
    return qwerty;
}
int calcm(string time_my, int t)
{
    int xyzabc;
    xyzabc = 10 *(time_my[3 + t] - '0') + (time_my[4 + t] - '0');
    return xyzabc;
}

int main()
{
    c_p_c();
    long long t;
    cin>>t;
    cin.ignore();

    while(t--)
    {
        string time_my; getline(cin, time_my);
        int xyz = calch(time_my, 0);
        int mili = calcm(time_my, 0);
        long long n; cin>>n; cin.ignore();
        string res = "";
        while(n--)
        {
            string time_of_friend; getline(cin, time_of_friend);
            int a = calch(time_of_friend, 0);
            int fsm = calcm(time_of_friend, 0);
            int b = calch(time_of_friend, 9);
            int d = calcm(time_of_friend, 9);


            if((a> xyz)||(b< xyz)) {res.push_back('0');}
            else if(a == xyz && xyz> mili) res.push_back('0');
            else if(b == xyz && d< mili) res.push_back('0');
            else res.push_back('1');
        }
        cout<<res<<"\n";       
    }
    return 0;
}
