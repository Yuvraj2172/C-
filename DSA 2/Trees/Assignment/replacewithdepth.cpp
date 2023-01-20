// You are given a generic tree. You have to replace each node with its depth value.
//  You just have to update the data of each node, there is no need to return or print anything.
void printPostOrder(TreeNode<int>* root) {
  if (root == NULL)
    return;
  for (int i = 0; i < root->children.size(); i++) {
    printPostOrder(root->children[i]);
  }
  cout << root->data << " ";
}