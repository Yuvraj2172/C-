// For a given Binary Tree of type integer and a number X, find whether a node exists in the tree with data X or not.
bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    if(root == NULL )return false;
    if(root->data == x)return true;
    bool foundinleft = isNodePresent(root->left ,x);
    bool foundinright = isNodePresent(root->right, x);
    if(foundinleft || foundinright)return true;
    return false;
}