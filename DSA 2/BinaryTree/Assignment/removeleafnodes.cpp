BinaryTreeNode<int>* removeLeafNodes(BinaryTreeNode<int> *root) {
    if(root==NULL || (root ->left == NULL && root ->right == NULL))return NULL;
    if(root->left !=NULL)root->left = removeLeafNodes(root->left);
    if(root->right !=NULL)root->right = removeLeafNodes(root->right);
    return root;
}