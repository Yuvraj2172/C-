vector<Node<int>*> constructLinkedListForEachLevel(BinaryTreeNode<int> *root) {
   vector<Node<int>*> v = {NULL};
   if(root == NULL)return v;
   else {
       v.clear();
   }
   queue<BinaryTreeNode<int>*> q;
   q.push(root);
   while(!q.empty()){
       int n = q.size();
       Node<int>* head = NULL;
       Node<int>* tail = NULL;
       while(n!=0){
           BinaryTreeNode<int>* front = q.front();
           q.pop();
           Node<int>* newNode = new Node<int>(front->data);
           if(head == NULL){
               head = newNode;
               tail = newNode;
           }
           else {
               tail->next = newNode;
               tail = newNode;
           }
           if(front->left)q.push(front->left);
           if(front->right)q.push(front->right);
           n--;
       }
       v.push_back(head);
   }
    return v;
}