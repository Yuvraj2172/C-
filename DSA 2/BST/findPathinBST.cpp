vector<int>* getPath(BinaryTreeNode<int> *root , int data) {
	if(root == NULL)return NULL;
	if(root->data == data){
		vector<int>* ans = new vector<int>();
		ans->push_back(data);
		return ans;
	}
	if(root->data > data){
		vector<int>* leftAns =getPath(root->left, data);
		if(leftAns){
			leftAns->push_back(root->data);
			return leftAns;
		}
	}
	if(root->data < data){
		vector<int>* rightAns =getPath(root->right , data);
		if(rightAns){
			rightAns->push_back(root->data);
			return rightAns;
		}
	}
}