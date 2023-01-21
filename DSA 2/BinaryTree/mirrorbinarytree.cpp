// For a given Binary Tree of type integer, update it with its corresponding mirror image.
void mirrorBinaryTree(BinaryTreeNode<int>* root) {
    if(root == NULL)return;
	BinaryTreeNode<int>* leftchild  = root->left;
	BinaryTreeNode<int>* rightchild = root->right;
	root->left = rightchild;
	root->right = leftchild;
	mirrorBinaryTree(root->left);
	mirrorBinaryTree(root->right);
}