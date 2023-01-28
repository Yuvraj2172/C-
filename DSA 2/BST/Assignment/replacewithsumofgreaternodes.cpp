void helper(BinaryTreeNode<int>* root,int& sum){
    if(root == NULL)return;
    helper(root->left, sum);
    sum += root->data;
    helper(root->right, sum);
}
void helper2(BinaryTreeNode<int>* root , int& sum){
    if(root == NULL)return;
    helper2(root->left ,sum);
    int temp = root->data;
    root->data =sum;
    sum-=temp;
    helper2(root->right, sum);
}
void replaceWithLargerNodesSum(BinaryTreeNode<int> *root) {
   int sum=0;
   helper(root,sum);
   helper2(root , sum);
}