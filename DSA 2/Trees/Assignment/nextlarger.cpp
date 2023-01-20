//  Next larger
// Given a generic tree and an integer n. Find and return the node with next larger element in the tree i.e. find a node with value just greater than n.
// Note: Return NULL if no node is present with the value greater than n.
#include <queue>
#include <climits>
void helper(TreeNode<int>* root, TreeNode<int>** ans){
  if (root == NULL) {
    return;
  }
  queue<TreeNode<int>*> q;
  TreeNode<int> *temp = root;
  q.push(temp);
  int largest  =INT_MIN;
  int secondlargest =INT_MIN;
  while (!q.empty()) {
    TreeNode<int> *child = q.front();
    q.pop();
    if(child->data > largest){
        secondlargest = largest;
        largest = child->data;
    }
    else if(child->data > secondlargest && child->data!=largest ){
        secondlargest = child->data;
    }
    for (int i = 0; i < child->children.size(); i++) {
      q.push(child->children[i]);
    }
    }
    *ans = new TreeNode<int>(secondlargest);
}

TreeNode<int>* getSecondLargestNode(TreeNode<int>* root) {
   TreeNode<int> * ans;
    helper(root, &ans);
   return ans;
}