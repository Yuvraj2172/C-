// For a given preorder and inorder traversal of a Binary Tree of type integer stored in an array/list, create the binary tree using the given two arrays/lists. You just need to construct the tree and return the root.
BinaryTreeNode<int> *helper(int *preorder , int prestart,int preend, int *inorder, int instart, int inend) {
  if (instart > inend || prestart > preend)
    return NULL;
  int rootData = preorder[prestart];
  BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
  int k = -1;
  for (int i = instart; i <= inend; i++) {
    if (inorder[i] == rootData) {
      k = i;
      break;
    }
  }
  root->left = helper(preorder, prestart + 1, prestart + (k - instart), inorder,
                      instart, k - 1);
  root->right = helper(preorder, prestart + (k - instart) + 1, preend, inorder,
                       k + 1, inend);
}
BinaryTreeNode<int> *buildTree(int *preorder, int preLength, int *inorder,int inLength) {
	int prestart =0;
	int preend = preLength-1;
	int instart=0;
	int inend = inLength -1;
	return helper(preorder ,   prestart , preend ,inorder, instart , inend);
}