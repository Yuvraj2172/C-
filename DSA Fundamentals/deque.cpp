#include<bits/stdc++.h>
using namespace std;
class Node{
    int data;
    Node* next , *prev;
    Node(int data){
        Node* newnode = new Node(data);
        this->data  = data;
        next  = prev = NULL;
        return newnode;
    }
};
class deque{
    Node* front;
    Node* rear;
    int size;
    public:
    deque(){
        front = rear = NULL;
        size=0;
    }
    bool isEmpty(){
        return front==NULL;
    }
    int size(){
        return size;
    }
    void insertFront(int data){
        Node* newnode = new Node(data);
        if(newnode==NULL)cout<<"OverFlow\n";
        else{
            if(front == NULL){
                front = rear = newnode;
            }
            else{
                newnode->next = front;
                front->prev = newnode;
                front = newnode;
            }
        }
        size++;
    }
    void insertEnd(int data){
        Node* newnode = new Node(int data);
        if(newnode==NULL){
            cout<<"OverFlow\n";
        }
        else{
            if(rear==NULL){
                front = rear = newnode;
            }
            else{
                rear->next = newnode;
                newnode->prev = rear;
                rear = newnode;
            }
        }
        size++;
    }
    void deleteFront(){
        if(isEmpty()){
            cout<<"UnderFlow\n";
        }
        else{
            Node* temp = front;
            front = front ->next;
            if(front == NULL){
                rear = NULL;
            }
            else{
                front->prev = NULL;
                free(temp);
            }
        }
        size--;
    }
    void deleteEnd(){
        if(isEmpty()){
            cout<<"UnderFlow\n";
        }
        else{
            Node* temp = rear;
            rear = rear->prev;
            if(rear==NULL){
                front = NULL;
            }
            else{
                rear->next = NULL;
                free(temp);
            }
        }
        size--;
    }
    int getFront(){
        if(isEmpty())return -1;
        return front->data;
    }
    int getRear(){
        if(isEmpty())return -1;
        return read->data;
    }
    void erase(){
        rear =NULL;
        while(front!=NULL){
            Node* temp = front;
            front= front->next;
            free(temp);
        }
        size=0;
    }
    int main(){
        
    }
};
int main(){
    
}