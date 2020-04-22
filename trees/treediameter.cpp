/*
 * Problem statement:= https://www.hackerearth.com/problem/algorithm/diameter-of-tree/
 * input:=  10
            6 3 2 5 4 1 8 7 9 10
*/

#include<bits/stdc++.h>
using namespace std;
struct tree {
    long long data;
    struct tree *left, *right;
};
long long diameter;
struct tree* Insert(struct tree* top, long long data){
    if(top == NULL){
        top = (struct tree*)malloc(sizeof(struct tree));
        top->data = data;
        top->right = NULL;
        return top;
    }
    if(top->data >= data){
        top->left = Insert(top->left, data);
    }else{
        top->right = Insert(top->right, data);
    }
    return top;
}
long long Diameter(struct tree *top){
    if(top == NULL){
        return -1;
    }
    long long left = Diameter(top->left);
    long long right = Diameter(top->right);
    diameter = max(diameter, left+1 + right+1);
    return max(left+1, right+1);
}
int main(){
    long long a, n;
    diameter = 0;
    cin>>n;
    struct tree * top = NULL;
    for(long long i = 0; i<n; i++){
        cin>>a;
        top = Insert(top, a);
    }
    Diameter(top);
    cout<<diameter+1;
}
