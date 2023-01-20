#include<bits/stdc++.h>
template <typename T>
class BinartTreeNode{
    public:
    T data;
    BinartTreeNode * left;
    BinartTreeNode *right;
    BinartTreeNode(T data){
        this->data = data;
        left = right = NULL;
    }
    ~BinartTreeNode(){
        delete left;
        delete right;
    }
};