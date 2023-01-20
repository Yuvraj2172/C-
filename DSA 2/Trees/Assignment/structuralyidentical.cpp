//  Structurally identical
// Given two generic trees, return true if they are structurally identical. Otherwise return false.
// Structural Identical

// If the two given trees are made of nodes with the same values and the nodes are arranged in the same way, then the trees are called identical.  

void helper(TreeNode<int>*root1 ,TreeNode<int>* root2, bool * flag){
  if (root1 == NULL && root2 == NULL) {
    *flag = false;
    return;
  }
  if (root1->data != root2->data) {
    *flag = false;
    return;
  }
  if (root1->children.size() != root2->children.size()) {
    *flag = false;
    return;
  }
    for(int i=0;i<root1->children.size();i++){
      if (root1->children[i]->data != root2->children[i]->data) {
        *flag = false;
        return;
      }
    }
    for(int i=0;i<root1->children.size();i++){
        helper(root1->children[i], root2->children[i],flag);
    }
}
bool areIdentical(TreeNode<int> *root1, TreeNode<int> * root2) {
    bool flag = true;
    helper(root1, root2, &flag);
    return flag;
}