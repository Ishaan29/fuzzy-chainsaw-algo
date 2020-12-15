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

template<typename T>
class Graph{
    map<T,list<T>> l;

public:
    //constructor
    Graph(){
        //
    }
    void addEdge(int x, int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }
    int bfs(T s, T d){
        map<T, int> dist;
        map<T,T> parent;
        queue<T> q;

        for(auto node_pair: l){
            T node = node_pair.first;
            dist[node] = INT_MAX;
        }
        q.push(s);
        dist[s] = 0;
        parent[s] = s;
        while (!q.empty()){
            T node = q.front();
            q.pop();
            for(auto nbr: l[node]){
                if (dist[nbr] == INT_MAX){
                    q.push(nbr);
                    dist[nbr] = dist[node] + 1;
                    parent[nbr] = node;
                }
            }
        }
        T temp = d;
        while(temp != s){
            cout<<temp<<"<--";
            temp = parent[temp];
        }
        cout<<s<<endl;
        return dist[d];
    }

    
};


int main() {
    c_p_c();
    int board[50] = {0};
    board[2] = 13;
    board[5] = 2;
    board[9] = 18;
    board[18] = 11;
    board[17] = -13;
    board[20] =  -14;
    board[24] = -8;
    board[25] = 10;
    board[32] = -2;
    board[34] = -22;

    Graph<int> g;
    for(int i  = 0; i <= 36; i++){
        //for every   dice throw add a  edge;
        for(int d = 1; d <= 6; d++){
            int j = i + d;
            j += board[j];
            if(i <= 36){
                g.addEdge(i,j);    
            }
        }
    }
    g.addEdge(36,36);

    int ans = g.bfs(0,36);
    cout<<ans<<endl;
    return 0;
}
