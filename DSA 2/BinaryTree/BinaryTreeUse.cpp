#include "BinaryTree.cpp"
#include <bits/stdc++.h>
using namespace std;
void printTree(BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return;
    cout << root->data << " : ";
    if (root->left != NULL)
    {
        cout << "L" << root->left->data;
    }
    if (root->right != NULL)
    {
        cout << "R" << root->right->data;
    }
    cout << endl;
    printTree(root->left);
    printTree(root->right);
}
BinaryTreeNode<int> *takeInput()
{
    int rootData;
    cout << "Enter data" << endl;
    cin >> rootData;
    if (rootData == -1)
        return NULL;
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int> *leftChild = takeInput();
    BinaryTreeNode<int> *rightChild = takeInput();
    root->left = leftChild;
    root->right = rightChild;
}
BinaryTreeNode<int> *takeInputLevelwise()
{
    int rootData;
    cout << "Enter root data ";
    cin >> rootData;
    if (rootData == -1)
        return NULL;
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        BinaryTreeNode<int> *front = q.front();
        q.pop();
        cout << "Enter left child of " << front->data << "\n";
        int leftChildData;
        cin >> leftChildData;
        if (leftChildData != -1)
        {
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(leftChildData);
            front->left = child;
            q.push(child);
        }
        cout << "Enter right child of " << front->data << "\n";
        int rightChildData;
        cin >> rightChildData;
        if (rightChildData != -1)
        {
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(rightChildData);
            front->right = child;
            q.push(child);
        }
    }
    return root;
}
void printLevelWise(BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return;
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        BinaryTreeNode<int> *front = q.front();
        q.pop();
        cout << front->data << ":";
        if (front->left != NULL)
        {
            cout << "L:" << front->left->data << ",";
            q.push(front->left);
        }
        else
        {
            cout << "L:" << -1 << ",";
        }

        if (front->right != NULL)
        {
            cout << "R:" << front->right->data;
            q.push(front->right);
        }
        else
            cout << "R:" << -1;

        cout << "\n";
    }
}
int numNodes(BinaryTreeNode<int>* root){
    if(root==NULL)return 0;
    return 1 + numNodes(root->left) + numNodes(root->right);
}
void inOrder(BinaryTreeNode<int>* root ){
    if(root == NULL)return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void preOrder(BinaryTreeNode<int> *root) {
	if(root == NULL)return;
	cout<<root->data<<" ";
	preOrder(root->left);
	preOrder(root->right);
}
void postOrder(BinaryTreeNode<int> *root) {
	if(root == NULL)return;;
	postOrder(root->left);
	postOrder(root->right);
	cout<<root->data<<" ";
}
int height(BinaryTreeNode<int>* root){
    if(root == NULL)return 0;
    return 1 + max(height(root->left) , height(root->right));
}
int diameter(BinaryTreeNode<int>* root){
    if(root == NULL)return 0;
    int option1 = height(root->left) + height(root->right);
    int option2 = diameter(root->left);
    int option3 = diameter(root->right);
    // return max(option1 , option2 , option3);
    int temp = max(option1 , option2);
    return max(temp , option3);
}
// 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1 
int main()
{
    BinaryTreeNode<int> *root = takeInputLevelwise();
    // printTree(root);
    // printLevelWise(root);
    inOrder(root);
    cout<<"Number of Nodes : "<<numNodes(root);
    delete root;
}