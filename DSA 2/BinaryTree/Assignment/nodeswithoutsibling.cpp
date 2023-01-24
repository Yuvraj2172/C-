// For a given Binary Tree of type integer, print all the nodes without any siblings.
void printNodesWithoutSibling(BinaryTreeNode<int> *root) {
    if(root == NULL)return;
    if(root ->left == NULL && root->right !=NULL){
        cout<<root->right->data<<" ";
    }
    if (root->right == NULL && root->left != NULL) {
      cout << root->left->data << " ";
    }
    printNodesWithoutSibling(root->left);
    printNodesWithoutSibling(root->right);
}
