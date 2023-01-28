#include<vector>
void helper(BinaryTreeNode<int>*root , int k , vector<int>ans){
    if(root == NULL)return;
    ans.push_back(root->data);
    k =k- root->data;
    if(!root->left && !root->right ){
        if(k==0){
            for(auto it: ans)cout<<it<<" ";
            cout<<"\n";
        }
        ans.pop_back();
        return;
    }
    helper(root->left ,k, ans);
    helper(root->right , k , ans);

}
void rootToLeafPathsSumToK(BinaryTreeNode<int> *root, int k) {
   vector<int> ans;
   helper(root , k , ans);
    return;
}
