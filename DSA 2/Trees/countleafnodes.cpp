void helper(TreeNode<int>* root, int *leaf){
    if(root->children.size()==0){
        *leaf = (*leaf+1);
    }
    for(int i=0;i<root->children.size(); i++){
        helper(root->children[i],leaf);
    }
}
int getLeafNodeCount(TreeNode<int>* root) {
    if(root==NULL)return 0;
    int leaf = 0;
    helper(root , & leaf);
    return  leaf;
}