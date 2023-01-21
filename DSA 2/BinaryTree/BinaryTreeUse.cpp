#include "BinaryTree.cpp"
#include <bits/stdc++.h>
using namespace std;
void printTree(BinaryTreeNode<int> *root)
{
   if(root == NULL)return;
   cout<<root->data<<" : ";
   if(root->left!=NULL){
        cout<<"L"<<root->left->data;
   }
   if(root->right!=NULL){
    cout<<"R"<<root->right->data;
   }
   cout<<endl;
   printTree(root->left);
   printTree(root->right);
}
BinaryTreeNode<int>* takeInput(){
    int rootData ;
    cout<<"Enter data"<<endl;
    cin>>rootData;
    if(rootData == -1)return NULL;
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int>* leftChild = takeInput();
    BinaryTreeNode<int>* rightChild = takeInput();
    root->left = leftChild;
    root->right = rightChild;
}
BinaryTreeNode<int>* takeInputLevelwise(){
    int rootData;
    cout<<"Enter root data ";
    cin>>rootData;
    if(rootData == -1)return NULL;
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty()){
        BinaryTreeNode<int>* front = q.front();
        q.pop();
        cout<<"Enter left child of "<<front->data<<"\n";
        int leftChildData;
        cin>>leftChildData;
        if(leftChildData!=-1){
            BinaryTreeNode<int>* child  = new BinaryTreeNode<int>(leftChildData);
            front->left = child;
            q.push(child);
        }
        cout<<"Enter right child of "<<front->data<<"\n";
        int rightChildData;
        cin>>rightChildData;
        if(rightChildData!=-1){
            BinaryTreeNode<int>* child  = new BinaryTreeNode<int>(rightChildData);
            front->right = child;
            q.push(child);
        }
    }
    return root;
}
int main()
{
    BinaryTreeNode<int>* root = takeInputLevelwise();
    printTree(root);
    delete root;
}