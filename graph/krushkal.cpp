/*To do this efficiently, we store the index of the parent item and (the upper bound of) the height of the tree of each set (vi p and vi rank in our implementation). Remember that vi is our shortcut for a vector of integers. p[i] stores the immediate parent of item i. If item i is the representative item of a certain disjoint set, then p[i] = i, i.e. a self-loop. rank[i] yields (the upper bound of) the height of the tree rooted at item i.
In this section, we will use 5 disjoint sets {0, 1, 2, 3, 4} to illustrate the usage of this data structure. We initialize the data structure such that each item is a disjoint set by itself with rank 0 and the parent of each item is initially set to itself.
To unite two disjoint sets, we set the representative item (root) of one disjoint set to be the new parent of the representative item of the other disjoint set. This effectively merges the two trees in the Union-Find Disjoint Set representation. As such, unionSet(i, j) will cause both items ‘i’ and ‘j’ to have the same representative item—directly or indirectly. For efficiency, we can use the information contained in vi rank to set the representative item of the disjoint set with higher rank to be the new parent of the disjoint set with lower rank, thereby minimizing the rank of the resulting tree. If both ranks are the same, we arbitrarily choose one of them as the new parent and increase the resultant root’s rank. This is the ‘union by rank’ heuristic. In Figure 2.6, top, unionSet(0, 1) sets p[0] to 1 and rank[1] to 1. In Figure 2.6, middle, unionSet(2, 3) sets p[2] to 3 and rank[3] to 1.
For now, let’s assume that function findSet(i) simply calls findSet(p[i]) recursively to find the representative item of a set, returning findSet(p[i]) whenever p[i] != i and i otherwise. In Figure 2.6, bottom, when we call unionSet(4, 3), we have rank[findSet(4)] = rank[4] = 0 which is smaller than rank[findSet(3)] = rank[3] = 1, so we set p[4] = 3 without changing the height of the resulting tree—this is the ‘union by rank’ heuristix */

#include <bits/stdc++.h>
#define forn(x,n) for(int i =x; i<n; ++i)
typedef long long int ll;
typedef pair<ll, ll> ii;
typedef vector<int> vi;
using namespace std;
class UnionFind{
    private: vi p, rank;
    public: 
        UnionFind(int N){
            rank.assign(N,0);
            p.assign(N,0);
            for(int i = 0; i<N; i++){
                p[i] = i;
            }
        }
        int findSet(int i){
            return p[i] == i ? i : findSet(p[i]); // Every node is a parent of itself
        }
        bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }
        void unionSet(int i, int j){
            if(!isSameSet(i,j)){
                int x = findSet(i) , y = findSet(j);
                if(rank[x] > rank[y]){
                    p[y] = x;
                }else{
                    p[x] = y;
                    if(rank[x] == rank[y]) rank[y]++;
                }
            }
        }

};
int main() {
    int T;
    scanf("%d", T);
    //krushkal's algo 
    vector<int , pair<ll,ll>> EdgeList;
    for(int i = 0; i< E; i++){
        int u,v,w;
        scanf("%d %d %d", &u,&v,&w);
        EdgeList.push_back(make_pair(w, ii(u,v));
    }
    sort(EdgeList.begin(), EdgeList.end());
    int mst_cost = 0;
    UnionFind UF(V);
    for(int i = 0; i< E; i++){
        pair<int, ii> front = EdgeList[i];
        if(!UF.isSameSet(front.second.first , front.second.second)){
            mst_cost += front.first;
            UF.unionSet(front.second.first, front.second.second);
        }
    }
    

}
