#include <bits/stdc++.h>

using namespace std;

#define LIMIT 100
#define PLIMIT 10000010
#define MOD 1000000007ll
#define INF 1e9
typedef long long ll;
typedef pair<ll, ll> ii;
int gcd(ll a, ll b) { return (b==0)?a:gcd(b, a%b); }
int lcm(ll a, ll b) { ll i=(a/gcd(a,b))*b; assert(i>0); return i; }
int dx[4] = {0, 1, 0, -1}, dy[4] = {-1, 0, 1, 0};
//  ***** FUNCTION *****
    bool isBST(Node* root, Node* l, Node* r){
        if(root == nullptr){
            return 1;
        }
        if(l != NULL and root->data <= l->data){
            return false;
        }
        if(r != NULL and root->data >= r->data){
            return false;
        }
        return isBST(root->left, l, root) and isBST(root->right, root,r);
    }
 	bool checkBST(Node* root) {
        //base case
        //check the left sub-tree and the right sub-tree.
        return isBST(root, NULL, NULL);
	}

//  ***** MAIN *****
int main(){
  //ios::sync_with_stdio(false);
  cin.tie(NULL);

  return 0;
}
