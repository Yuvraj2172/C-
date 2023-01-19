#include<bits/stdc++.h>
using namespace std;
#include "TreeNode.h"
TreeNode<int>* takeInputLevelwise(){
    int rootdata;
    cout<<"Enter root data\n";
    cin>>rootdata;
    TreeNode<int>* root = new TreeNode<int>(rootdata);
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(!pendingNodes.empty()){
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout<<"Enter number of children of "<<front->data;
        int numChild;
        cin>>numChild;
        for(int i=0;i<numChild;i++){
            int childData ;
            cout<<"Enter "<<i<<" th child of "<<front->data<<endl;
            cin>>childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front-> children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}
TreeNode<int>* takeInput(){
    int rootdata;
    cout<<"Enter the root data ";
    cin>>rootdata;
    TreeNode<int>* root = new TreeNode<int>(rootdata);
    int n;
    cout<<"Enter the number of children of "<<rootdata<<"\n";
    cin>>n;
    for(int i=0;i<n;i++){
        TreeNode<int>* child = takeInput();
        root->children.push_back(child);
    }
    return root;
}

void printTree(TreeNode<int>* root){
    if(root==NULL)return; //Edge Case
    cout<<root->data<<": ";
    for(int i=0;i < root->children.size();i++){
        cout<<root->children[i]->data<<" , ";
    }
    cout<<"\n"; 
    for(int i=0;i<root->children.size();i++){
        printTree(root->children[i]);
    }
}
int main(){
    // TreeNode<int>* root = new TreeNode<int>(10);
    // TreeNode<int>* node1 = new TreeNode<int>(20);
    // TreeNode<int>* node2 = new TreeNode<int>(30);
    // root->children.push_back(node1);
    // root->children.push_back(node2);
    TreeNode<int>* root = takeInputLevelwise();
    printTree(root);
}