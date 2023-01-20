// Given a tree and an integer x, find and return the number of nodes which contains data greater than x.
// Input format:

// The first line of input contains data of the nodes of the tree in level order form. The order is: data for root node, number of children to root node, data of each of child nodes and so on and so forth for each node. The data of the nodes of the tree is separated by space.  
// The following line contains an integer, that denotes the value of x. 

void helper(TreeNode<int>* root, int x, int* ans){
    if(root->data>x)*ans = (*ans +1);
    for(int i=0;i<root->children.size();i++){
        helper(root->children[i], x,ans);
    }
    
}
int getLargeNodeCount(TreeNode<int>* root, int x) {
  int ans =0;
  helper(root, x , &ans);
   return ans;
}