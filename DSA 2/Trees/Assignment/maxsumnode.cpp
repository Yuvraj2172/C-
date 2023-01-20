// Given a generic tree, find and return the node for which sum of its data and data of all its child nodes is maximum. In the sum, data of the node and data of its immediate child nodes has to be taken.

void helper(TreeNode<int>* root, TreeNode<int>** maxNode, int * maxsum){
        int sum = root->data;
        for(int i=0;i<root->children.size();i++){
            sum+= root->children[i]->data;
        }
        if(sum > (*maxsum)){
            *maxsum = sum;
            *maxNode = root;
        }
        for(int i=0;i<root->children.size();i++){
            helper(root->children[i],maxNode, maxsum);
        }
}
TreeNode<int>* maxSumNode(TreeNode<int>* root) {
    TreeNode<int>* maxNode ;
    int maxsum =0;
    helper(root, &maxNode, &maxsum);
    return maxNode;
}