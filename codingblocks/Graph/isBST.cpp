#include <bits/stdc++.h>
using namespace std;

bool isBST(TreeNode* node, int minKey, int maxKey){
    if(node == NULL) return true;
    if(node->data >= maxKey || root->data <= minKey)
        return false;
    return  isBST(root->left, minKey, root->data) &&
            isBST(root->right, root->data, maxKey );
}


bool isBST(TreeNode* root){
    return isBST(root, INT_MIN, INT_MAX)? 1: 0;
}

int main(){
    int t; cin>>t;
    while(t--){
        //driver
        solve();
    }
}
