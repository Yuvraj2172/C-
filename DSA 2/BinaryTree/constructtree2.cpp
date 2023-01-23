// For a given postorder and inorder traversal of a Binary Tree of type integer stored in an array/list, create the binary tree using the given two arrays/lists. You just need to construct the tree and return the root.

BinaryTreeNode<int>* helper(int* postorder , int poststart , int postend , int* inorder , int instart , int inend){
    if(poststart > postend || instart > inend)return NULL;
    int rootdata = postorder[postend];
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootdata);
    int k =-1;
    for(int i=instart ;i<=inend; i++){
        if(inorder[i]== rootdata){
            k=i;
            break;
        }
    }
    int lps = poststart;
    int lis = instart;
    int lie = k-1;
    int lpe = lie + lps - lis;
    int ris = k+1;
    int rie = inend;
    int rps = lpe +1;
    int rpe = postend -1;
    root->left = helper(postorder , lps , lpe , inorder , lis , lie);
    root->right = helper(postorder , rps , rpe , inorder , ris , rie);
    return root;
}
BinaryTreeNode<int>* buildTree(int *postorder, int postLength, int *inorder, int inLength) {
    int poststart =0;
    int postend = postLength -1;
    int instart =0;
    int inend = inLength -1;
    return helper(postorder , poststart , postend , inorder , instart , inend);
}