//  Next larger
// Given a generic tree and an integer n. Find and return the node with next larger element in the tree i.e. find a node with value just greater than n.
// Note: Return NULL if no node is present with the value greater than n.
#include <bits/stdc++.h>
void helper(TreeNode<int>* root, TreeNode<int>**  ans , int x,int* greatest){
    if(root==NULL)return;
    if((root->data > x) && root->data < *greatest){
        *ans = root;
        *greatest = root->data;
        return;
    }
    for(int i=0;i<root->children.size();i++){
        helper(root->children[i],ans , x , greatest);
    }
}
TreeNode<int>* getNextLargerElement(TreeNode<int>* root, int x) {
    int greatest = INT_MAX;
    TreeNode<int>* ans;
    helper(root,&ans, x ,&greatest);
    return ans;
}