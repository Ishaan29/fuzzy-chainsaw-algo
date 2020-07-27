// #include<iostream> 
// #include <list> 
// #include <vector>
#include <bits/stdc++.h>
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
  
class Graph 
{ 
    int V;   
    list<int> *adj; 
public: 
    Graph(int V); 
    void addEdge(int v, int w); 
    bool isReachable(int s, int d);   
}; 
  
Graph::Graph(int V) 
{ 
    this->V = V; 
    adj = new list<int>[V]; 
} 
  
void Graph::addEdge(int v, int w) 
{ 
    adj[v].push_back(w);
} 

bool Graph::isReachable(int s, int d) 
{ 
    if (s == d) 
      return true; 
  
    bool *visited = new bool[V]; 
    for (int i = 0; i < V; i++) 
        visited[i] = false; 
  
    list<int> queue; 
  
    visited[s] = true; 
    queue.push_back(s); 
    list<int>::iterator i; 
  
    while (!queue.empty()) 
    { 
        s = queue.front(); 
        queue.pop_front(); 

        for (i = adj[s].begin(); i != adj[s].end(); ++i) 
        { 
            if (*i == d) 
                return true; 
            if (!visited[*i]) 
            { 
                visited[*i] = true; 
                queue.push_back(*i); 
            } 
        } 
    } 
    return false; 
} 

void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/input.txt", "r", stdin);
    freopen("/Users/ishan/Desktop/fuzzy-chainsaw-algo/output.txt", "w", stdout);
#endif
}

void solve(){
    //cout<<"called";
    int n; cin>>n;
    vector<char> in;
    vector<char> out;
    for(int i = 0; i < n; i++){
        char ch; cin>>ch;
        in.push_back(ch);
    }
    for(int i = 0; i < n; i++){
        char ch; cin>>ch;
        out.push_back(ch);
    }

    Graph g(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(out[i] == 'Y' && in[j] == 'Y' && abs(i - j) <= 1){
                g.addEdge(i,j);
               // cout<<"edge Added"<<endl;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(g.isReachable(i , j)){
                cout<<"Y";
            }else{
                cout<<"N";
            }
        }
        cout<<"\n";
    }


}

int main() {
    c_p_c();
    int t; cin>>t;
    for(int i = 1; i <= t; i++){
        cout<<"Case #"<<i<<":"<<endl;
        solve();
    }

}
