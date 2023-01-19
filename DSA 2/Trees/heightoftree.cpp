int getHeight(TreeNode<int>* root) {
   if(root == NULL)return 0;
   int ans =0;
   for(int i=0; i<root->children.size();i++){
       int childheight  = getHeight(root->children[i]);
       ans = max(ans , childheight);
   }
   return ans+1;
}