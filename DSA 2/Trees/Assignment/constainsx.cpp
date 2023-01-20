//  Contains x
// Given a generic tree and an integer x, check if x is present in the given tree or not. Return true if x is present, return false otherwise.
// Input format :

// The first line of input contains data of the nodes of the tree in level order form. The order is: data for root node, number of children to root node, data of each of child nodes and so on and so forth for each node. The data of the nodes of the tree is separated by space.  
// The following line contains an integer, that denotes the value of x.

// Output format :

// The first and only line of output contains true, if x is present and false, otherwise.

void helper(TreeNode<int>* root, int x, bool* flag){
    if(root->data == x){
        *flag = true;
    }
    for(int i=0;i<root->children.size();i++){
        helper(root->children[i],  x, flag);
    }
}
bool isPresent(TreeNode<int>* root, int x) {
    if(root == NULL)return false;
    bool flag = false;
    helper(root, x, &flag);
    return flag;
}