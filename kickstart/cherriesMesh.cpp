#include <experimental/optional>
#include<bits/stdc++.h>
#define forn(i,n) for(int i = 0; i<n ; ++i)
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define pb push_back
#define MOD 1000000007
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define FOR(a,n) for(int i=a;i<n;++i)
#define arrin(n) for(int i=0; i < n; ++i) cin>>arr[i];
#define arrout(n) for(int i=0; i < n; ++i) cout<<arr[i]<<" ";cout<<nl;
#define nl "\n"
#define mp make_pair
typedef unsigned long long ull;
typedef long long int ll;
typedef long double ld;
using namespace std;
const double pi=acos(-1.0);
const double pii=2*pi;
const double eps=1e-6;
const double inf=1e15;
typedef pair<pair<ll,ll>,pair<ll,ll>>  iPair;
typedef priority_queue<iPair> Pq;
ll parent[100002],rk[100002];
using namespace std;

void make_set(ll v)
{
   parent[v]=v;
   rk[v]=0;
}
ll find_set(ll v)
{
    if(v==parent[v]) return v;
    else return parent[v]=find_set(parent[v]);
}
ll union_set(ll a,ll b)
{
   a=find_set(a);
   b=find_set(b);
   if(a!=b) // belongs to diff set
   {
      if(rk[a]<rk[b]) swap(a,b); // a should  have highest rank
      parent[b]=a;
      if(rk[a]==rk[b]) rk[a]++; // now as a is root of this set its merging with set of same rank wil increase its rank by 1
   } 
}
int main(){
    ll T;
  cin>>T;
  for(ll t=1;t<=T;t++)
  {
     ll n,m,u,v,w;
     cin>>n>>m;
     vector<iPair> edges,result;
     for(ll i=0;i<m;i++)
     {
        cin>>u>>v;
        edges.pb(mp(mp(1,u+v+1),mp(u,v)));
     }
     sort(edges.begin(),edges.end());
     for(ll i=1;i<=n;i++) make_set(i); //every node is in its own set and its own parent
     ll ans=0;
     for(auto i: edges)
     {
      if(find_set(i.second.first)!=find_set(i.second.second))
      {
          result.pb(i);
          ans+=i.first.first;
          union_set(i.second.first,i.second.second);
      }
     }
     set<ll> s;
     for(ll i=1;i<=n;i++) s.insert(find_set(i));
     ans+=2*(s.size()-1);
     cout<<"Case #"<<t<<": "<<ans<<nl;
  }
}
