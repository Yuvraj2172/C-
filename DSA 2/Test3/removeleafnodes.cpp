// Remove all leaf nodes from a given generic Tree. Leaf nodes are those nodes, which don't have any children.
TreeNode<int>* removeLeafNodes(TreeNode<int>* root) {
   if(root == NULL)return NULL;
   if(root->children.size()==0){
	   delete root ;
	   return NULL;
   }
   for(int i=0;i<root->children.size();i++){
	   TreeNode<int>* child = root->children[i];
	   if(child->children.size()==0)delete child;
	   for(int j =1 ;j < root->children.size()-1 ; j++1){
		   root->children[j] = root->children[j+1];
	   }
	   root->children.pop_back();
	   i--;
   }
   for(int i=0;i<root->children.size();i++){
	   root->children[i] = removeLeafNodes(root->children[i]);
   }
   return root;
}


