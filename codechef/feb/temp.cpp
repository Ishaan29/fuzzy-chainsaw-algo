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
void solve() {
    /**
     * NOTE :=
     * TODO :=  
    */
}

int ch(string meeting_time, int t)
{
    int mh;
    mh = 10 *(meeting_time[0 + t] - '0') + 1* (meeting_time[1 + t] - '0');
    if(meeting_time[6+t] == 'P'){if(mh != 12) mh += 12;}
    if(meeting_time[6 + t] == 'A') {if(mh == 12) mh-= 12;}
    return mh;
}
int cm(string meeting_time, int t)
{
    int mm;
    mm = 10 *(meeting_time[3 + t] - '0') + (meeting_time[4 + t] - '0');
    return mm;
}

int main()
{
    c_p_c();
    long long t;
    cin>>t;
    cin.ignore();

    while(t--)
    {
        string meeting_time; getline(cin, meeting_time);
        int mh = ch(meeting_time, 0);
        int mm = cm(meeting_time, 0);
        long long n; cin>>n; cin.ignore();
        string res = "";
        while(n--)
        {
            string time_by_friend; getline(cin, time_by_friend);
            int fsh = ch(time_by_friend, 0);
            int fsm = cm(time_by_friend, 0);
            int feh = ch(time_by_friend, 9);
            int fem = cm(time_by_friend, 9);


            if((fsh> mh)||(feh< mh)) {res.push_back('0');}
            else if(fsh == mh && fsm> mm) res.push_back('0');
            else if(feh == mh && fem< mm) res.push_back('0');
            else res.push_back('1');
        }
        cout<<res<<"\n";       
    }
    return 0;
}


