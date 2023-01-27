BinaryTreeNode<int>* helper(int* input , int start , int end ){
	if(start > end )return NULL;
	int mid = start + (end - start)/2;
	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(input[mid]);
	root->left = helper(input, start, mid-1);
	root->right = helper(input , mid+1 , end);
	return root;
}
BinaryTreeNode<int>* constructTree(int *input, int n) {
	return helper(input , 0 , n-1);
}