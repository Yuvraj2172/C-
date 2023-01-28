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
    ans.push_back(root->data);
    helper(root->left , ans);
    helper(root->right , ans);
}
void pairSum(BinaryTreeNode<int> *root, int sum) {
    vector<int> ans;
    helper(root , ans);
    sort(ans.begin(), ans.end());
    helper2(ans , sum);   
}