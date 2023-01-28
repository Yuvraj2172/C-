#include "BinaryTree.cpp"
class BST{
    BinaryTreeNode<int>* root;
    public:
    BST(){
        root = NULL;
    }
    ~BST(){
        delete root;
    }   
     void deleteData(int data){

    }
    private: 
    void insert(int data , BinaryTreeNode<int>* node){
        if(node == NULL){
            BinaryTreeNode<int>* newNode = new BinaryTreeNode<int>(data);
            node= newNode;
            return node;
        }
        if(node->data < data){
            root->right = insert(data , root->right);
            return root;
        }
        root->left = insert(data , root->left);
        return root;
    }
    void insert(int data){
        inset(data , root);
    }
    private: 
    bool hasData(int data , BinaryTreeNode<int>* node){
        if(node == NULL)return false;
        if(node->data == data)return true;
        else if(node->data < data){
            return hasData(data,node->right);
        }
        else {
            return hasData(data,node->left);
        }
    }
    public :
    bool hasData(int data){
        hasData(data , root);
    }
};