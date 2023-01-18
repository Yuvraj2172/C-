#include<bits/stdc++.h>
using namespace std;
template <typename T>
class Node{
    public:
    T data;
    Node<T>* next;
    Node( T data){
        this->data = data;
        next = NULL;
    }
};
template <typename T>
class Stack{
    Node<T>* head;
    int size;
    public:
    Stack(){
       head=NULL;
       size=0; 
    }
    int getSize(){
        return size;
    }
    bool isEmpty(){
        return size==0;
    }
    void push(T data){
        Node<T>* temp = new Node<T>(data);
        temp->next = head;
        head = temp;
        size++;
    }
    T pop(){
        if(isEmpty())return 0;
        T ans = head->data;
        Node<T>* temp = head;
        head = head->next;
        delete temp;
        size--;
        return ans;

    }
    T top(){
        if(isEmpty())return 0;
        return head->data;
    }
};
