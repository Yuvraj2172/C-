#include<cmath>
#include<climits>
class Pair{
	public:
	int minimum;
	int maximum ;
	int height;
	bool isBST;
};
Pair helper(BinaryTreeNode<int>*root){
	if(root == NULL){
		Pair res;
		res.minimum = INT_MAX;
		res.maximum = INT_MIN;
		res.height = 0;
		res.isBST = true;
		return res;
	}
	Pair leftAns = helper(root->left);
	Pair rightAns = helper(root->right);
	int minimum = min( root->data ,  min(leftAns.minimum , rightAns.minimum) );
	int maximum = max(root->data , max(leftAns.maximum, rightAns.maximum));
	bool isBSTFinal = (root->data < rightAns.minimum) && (root->data > leftAns.maximum )&& leftAns.isBST && rightAns.isBST;
	Pair ans;
	ans.minimum = minimum;
	ans.maximum = maximum;
	ans.isBST = isBSTFinal;
	if(isBSTFinal){
		ans.height = 1 + max(leftAns.height , rightAns.height);
	}
	else {
		ans.height= max(leftAns.height, rightAns.height);
	}
	return ans;

}
int largestBSTSubtree(BinaryTreeNode<int> *root) {
    return helper(root).height;
}