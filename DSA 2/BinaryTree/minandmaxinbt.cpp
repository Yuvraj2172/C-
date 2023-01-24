/*
	The first value of the pair must be the minimum value in the tree and 
	the second value of the pair must be the maximum value in the tree
*/
#include <climits>
void helper(BinaryTreeNode<int>* root,pair<int,int>&p){
	if(root == NULL)return;
	p.first = (root->data < p.first) ? root->data : p.first;
	p.second = (root->data > p.second)? root->data : p.second;
	helper(root->left, p);
	helper(root->right, p);
}
pair<int, int> getMinAndMax(BinaryTreeNode<int> *root) {
	pair<int, int> p;
	p.first = INT_MAX;
	p.second = INT_MIN;
	helper(root, p);
	return p;
}