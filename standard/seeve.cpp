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



// prime for larger queries

int primes[10000];

//2 3 4 5 6 7 8 9 10 11 12 13 14

bool check_if_prime(long n){
    for(int i = 2; i*i <= n; i++){
        if(n%i == 0){
            return false;
        }
    }
 
    return true;
}


void seave(){
    int c = 0;
    primes[0] = 0; primes[1] = 0;
    for(int i = 2; i < 10000000; i++){
        if(check_if_prime(i)){
            c++;
        }
        primes[i] = c;
    }
   
}

bool p[100000];

void dummy(){
    memset(p, true, sizeof(p));
    
    for(int i = 3; i  < 100000; i++){
        if(p[i]){
            for(int j = i; j < 100000; j = j*j){
                p[j] = false;
            }
        }
    }
    for(int i = 3; i < 100; i++){
        cout<<"number \t"<<i<<" "<<p[i]<<endl;
    }    
}


int main(){
    c_p_c();
    //s e a v e();
    dummy();
    //int n = 3;
    //cout<<primes[3]<<endl;
    return 0;
}


