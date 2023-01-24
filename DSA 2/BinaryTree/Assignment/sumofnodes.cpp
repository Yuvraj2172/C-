// For a given Binary Tree of integers, find and return the sum of all the nodes data.
void helper(BinaryTreeNode<int>* root, int& ans){
	if(root == NULL)return;
	ans += root->data;
	helper(root->left, ans);
	helper(root->right, ans);
}
int getSum(BinaryTreeNode<int>* root) {
   int ans =0;
   helper(root, ans);
   return ans;
}