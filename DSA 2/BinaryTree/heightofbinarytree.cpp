// For a given Binary Tree of integers, find and return the height of the tree.
#include <climits>
int height(BinaryTreeNode<int>* root) {
    if(root == NULL)return 0;
	int leftheight = height(root->left);
	int rightheight = height(root->right);
	int ans = max(leftheight , rightheight)+1;
	return ans;
}