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
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
	uniform_int_distribution<int> uid(0,lim-1);
	return uid(rang);
}
int mpow(int base, int exp); 
void ipgraph(int n, int m);
void dfs(int u, int par);

const int mod = 1'000'000'007;
const int N = 3e5, M = N;
//=======================

vi g[N];
int a[N];
// vector<int> arr;
void bitSet(vector<int> set, int k){
    int n = set.size();
    int x = pow(2,n) -1;//2^n - 1 bits.
    for(int i = 0; i<=x; ++i){
        //__builtin_popcount(i) : return's the number of 1's in a binary of number;
        if(__builtin_popcount(i) != k) continue;
        for(int j = 0; j<n; ++j){
            auto z = 1<<j; // right shift
            if (z & i){ // to find all the number of set which are set as on in bitmask.
                cout<<set[j]<<" ";
            }
        }
        cout<<endl;
    }
}

int subarraysDivByK(vector<int>& A, int K) {
        map<int,int>m;
        int sum=0;
        for(int i=0;i<A.size();i++){
            sum+=A[i];
            m[((sum%K)+K)%K]++;
        }
        int ans=0;
        for(auto itr:m){
            if(itr.second>1){
                ans=ans+((itr.second)*(itr.second-1))/2;
            }
        }
        ans+=m[0];
        return ans;
        
}
int longSubarrWthSumDivByK(int arr[],int n, int k) 
{ 
    // unodered map 'um' implemented as 
    // hash table 
    unordered_map<int, int> um; 
      
    // 'mod_arr[i]' stores (sum[0..i] % k) 
    int mod_arr[n], max = 0; 
    int curr_sum = 0; 
      
    // traverse arr[] and build up the 
    // array 'mod_arr[]' 
    for (int i = 0; i < n; i++) 
    { 
        curr_sum += arr[i]; 
          
        // as the sum can be negative, taking modulo twice 
        mod_arr[i] = ((curr_sum % k) + k) % k;
        if((curr_sum %k) != 0){
          mod_arr[i] = 
        }          
    }     
      
    for (int i = 0; i < n; i++) 
    { 
        // if true then sum(0..i) is divisible 
        // by k 
        if (mod_arr[i] == 0) 
            // update 'max' 
            max = i + 1; 
          
        // if value 'mod_arr[i]' not present in 'um' 
        // then store it in 'um' with index of its 
        // first occurrence         
        else if (um.find(mod_arr[i]) == um.end()) 
            um[mod_arr[i]] = i; 
              
        else
            // if true, then update 'max' 
            if (max < (i - um[mod_arr[i]])) 
                max = i - um[mod_arr[i]];             
    } 
      
    // required length of longest subarray with 
    // sum divisible by 'k' 
    return max; 
}
 
void solve() {
  int n, b; cin>>n>>b;
  // int arr[n];
  vector<int> arr;
  for(int i = 0; i < n; i++){
    int t; cin>>t;
    arr[i] = t;
  }
  int ans = subarraysDivByK(arr, b);
  cout<<ans<<endl;
  //brute force generate all subset and divide the current sum

}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}

int mpow(int base, int exp) {
  base %= mod;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((ll)result * base) % mod;
    base = ((ll)base * base) % mod;
    exp >>= 1;
  }
  return result;
}

void ipgraph(int n, int m){
	int i, u, v;
	while(m--){
		cin>>u>>v;
    u--, v--;
		g[u].pb(v);
		g[v].pb(u);
	}
}

void dfs(int u, int par){
	for(int v:g[u]){
		if (v == par) continue;
		dfs(v, u);
	}
}
