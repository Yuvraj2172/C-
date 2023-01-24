void printLevelWise(BinaryTreeNode<int> *root) {
    if(root == NULL)return;
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        while(n!=0){
            BinaryTreeNode<int>* front = q.front();
            q.pop();
            cout<<front->data<<" ";
            if(front->left)q.push(front->left);
            if(front->right)q.push(front->right);
            n--;
        }
        cout<<"\n";
    }
}