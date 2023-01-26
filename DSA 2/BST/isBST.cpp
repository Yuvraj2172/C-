#include<climits>
int minimum(BinaryTreeNode<int>* root){
	if(root == NULL)return INT_MAX;
	return min(root->data , min(minimum(root->left), minimum(root->right)));
}
int maximum(BinaryTreeNode<int>*root){
	if(root == NULL)return INT_MIN;
	return max(root->data , max(maximum(root->left), maximum(root->right)));
}
bool isBST(BinaryTreeNode<int> *root) {
	if(root == NULL)return 1;
	int leftMax = maximum(root->left);
	int rightMin = minimum(root->right);
	bool output = (root->data > leftMax) && (root->data <= rightMin) && isBST(root->left) && (isBST(root->right));
	return output;
}

#include <climits>
bool helper(BinaryTreeNode<int>* root , long minval , long maxval){
	if(root == NULL)return  true;
	if(root->data > maxval || root->data<= minval )return false;
	return helper(root->left,  minval, root->data) && helper(root->right , root->data , maxval);
}
bool isBST(BinaryTreeNode<int> *root) {
	return helper(root , LONG_MIN, LONG_MAX);
}