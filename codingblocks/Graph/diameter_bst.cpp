#include<bits/stdc++.h>
using namespace std;

int diameter(TreeNode* node, int& dim){
    if(node == NULL) return 0;
    int l = diameter(node->left, dim);
    int r = diameter(node->right, dim);
    int maxH = l +  r + 1;
    dim = max(dim, maxH);
    return max(l, r) + 1;
}

int diameter(TreeNode* node){
    int dim = 0;
    diameter(node, dim);
    return dim;
}

int main(){
    //drvier
}
