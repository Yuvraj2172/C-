// Given the binary Tree and two nodes say ‘p’ and ‘q’. Determine whether the two nodes are cousins of each other or not. Two nodes are said to be cousins of each other if they are at same level of the Binary Tree and have different parents.
// Do it in O(n).

int findparent(BinaryTreeNode<int>* root , int& parent ,  int height , int data){
    if(root == NULL)return 0;
    if(root->data == data){
        return height;
    }
    parent = root->data;
    int left = findparent(root->left, parent, 1+height, data);
    if(left)return left;

    parent = root->data;
    int right = findparent(root->right , parent ,  1+ height, data);
    return right;
}
bool isCousin(BinaryTreeNode<int> *root, int p, int q) {
    if(root==NULL)return false;
    if(root->data == p || root->data == q)return false;
    int xparent = -1;
    int xheight = findparent(root , xparent , 0 , p);

    int yparent = -1;
    int yheight = findparent(root ,yparent , 0 , q);

    if(xheight == yheight && (xparent != yparent))return true;
    return false;
}
