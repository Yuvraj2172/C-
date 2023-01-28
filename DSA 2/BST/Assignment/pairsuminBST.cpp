#include<bits/stdc++.h>
void helper2(vector<int>& ans , int sum){
    int i=0;
    int j = ans.size()-1;
    while(i<j){
        if(ans[i] + ans[j] == sum){
            cout<<ans[i]<<" "<<ans[j]<<"\n";
            i++;
            j--;
        }
        else if(ans[i] + ans[j] > sum ){
            j--;
        }
        else i++;
    }
}
void helper(BinaryTreeNode<int>* root , vector<int>& ans){
    if(root== NULL)return;
    helper(root->left , ans);
	 ans.push_back(root->data);
    helper(root->right , ans);
}
void printNodesSumToS(BinaryTreeNode<int> *root, int sum) {
    vector<int> ans;
    helper(root , ans);
    helper2(ans , sum);   
}