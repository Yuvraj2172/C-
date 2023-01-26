// Given a BST and an integer k. Find if the integer k is present in given BST or not. You have to return true, if node with data k is present, return false otherwise.
// Note: Assume that BST contains all unique elements.
bool searchInBST(BinaryTreeNode<int> *root , int k) {
	if(root == NULL)return 0;
	if( k > root->data){
		return searchInBST(root->right, k);
	}
	else if(k < root->data){
		return searchInBST(root->left, k);
	}
	return root->data == k;
}