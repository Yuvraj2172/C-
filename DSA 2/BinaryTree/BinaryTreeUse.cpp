#include "BinaryTree.cpp"
#include<bits/stdc++.h>
using namespace std;
int main(){
    BinartTreeNode<int>* root = new BinartTreeNode<int>(1);
    BinartTreeNode<int>* node1 = new BinartTreeNode<int>(2);
    BinartTreeNode<int>* node2 = new BinartTreeNode<int>(3);
    root->left = node1;
    root->right = node2;
}