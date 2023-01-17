#include<bits/stdc++.h>
using namespace std;
template <typename T>
class Node{
    public:
    T data;
    Node<T> next;
    Node( T data){
        this->data = data;
        next = NULL;
    }
};
template <typename T>
/************************************************************
 
    Following is the structure of the node class 
 
    class Node {
    	public :
    	int data;
    	Node *next;

    	Node(int data) {
        	this->data = data;
        	next = NULL;
    	}
	};

**************************************************************/

class Queue {
	Node* head;
	Node* tail;
	int size;
   public:
    Queue() {
		head=NULL;
		tail = NULL;
		size =0;
	}
	
	/*----------------- Public Functions of Stack -----------------*/

	int getSize() {
		return  size;
	}

    bool isEmpty() {
		return size==0;
	}

    void enqueue(int data) {
		Node* newnode= new Node(data);
		if(head==NULL){
			head = newnode;
			tail = head;
            size++;
            return ;
		}
		tail->next = newnode;
		tail = newnode;
        size++;
		return;
        }

    int dequeue() {
		if(size==0)return -1;
        int ans = head->data;
		Node* temp = head;
		head = head->next;
		size--;
		delete temp;
		return ans;
    }

    int front() {
		if(size==0)return -1;
		return head->data;
    }
};