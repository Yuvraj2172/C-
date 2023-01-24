#include<vector>
void zigZagOrder(BinaryTreeNode<int> *root) {
    if(root == NULL)return;
    vector<BinaryTreeNode<int>*> q;
    q.push_back(root);
    int level =1;
    while(!q.empty()){
        int n = q.size();
        if(level%2==0){
            for(int i= n-1; i>=0;i--)cout<<q[i]->data<<" ";
        }
        else {
            for(auto it : q){
                cout<<it->data<<" ";
            }
        }
        for(int i=0;i<n;i++){
            BinaryTreeNode<int>* front = q[i];
            if(front->left)q.push_back(front->left);
            if(front->right)q.push_back(front->right);
        }
        q.erase(q.begin(), q.begin() + n);
        cout<<"\n";
        level++;
    }
}