#include <iostream>
#include <queue>
#include<vector>
using namespace std;
template <typename T>
class Node {
   public:
    T data;
    Node<T>* next;
    Node(T data) {
        this->data = data;
        this->next = NULL;
    }
};

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
void helper(BinaryTreeNode<int>* root ,vector<int>& ans){
	if(root == NULL)return;
	helper(root->left , ans);
	ans.push_back(root->data);
	helper(root->right ,ans);
}
Node<int>* constructLinkedList(BinaryTreeNode<int>* root) {
	if(root == NULL)return NULL;
	vector<int> ans;
	helper(root ,ans);
	Node<int>* head=NULL;
	Node<int>* tail= head;
	// cout<<"size "<<ans.size();
    // for(auto it : ans)cout<<it<<" ";
    for(int i=0;i<ans.size();i++){
        Node<int>* newNode= new Node<int>(ans[i]);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }else {
            tail->next = newNode;
            tail = newNode;
        }
    }
	return head;
}

// #include "solution.h"

BinaryTreeNode<int>* takeInput() {
    int rootData;

    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int>* currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int>* rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    Node<int>* head = constructLinkedList(root);

    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}