// You have been given a linked list of integers. Your task is to write a function that inserts a node at a given position, 'pos'.
// Note:

// Assume that the Indexing for the linked list always starts from 0.

// If the given position 'pos' is greater than length of linked list, then you should return the same linked list without any change. And if position 'pos' is equal to length of input linked list, then insert the node at the last position


#include <iostream>

class Node {
   public:
    int data;
    Node *next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

using namespace std;
// #include "solution.h"

Node *takeinput() {
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1) {
        Node *newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}
Node* helper(Node *temp, int i , int data){
	if(temp == NULL)return temp;
	if(i-1<0){
		Node* res= new Node(data);
		res->next = temp;
		temp= res;
		return temp;
	}
	if(i -1 == 0 ){
		Node* res = new Node(data);
		res->next = temp->next;
		temp->next =  res;
		return temp;
	}
	  temp->next  = helper(temp->next , i-1 , data);
	  return temp;
}

Node* insertNode(Node *head, int i, int data) {
	Node* temp = head;
	return helper(temp,  i,  data);
}
void print(Node *head) {
    Node *temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        Node *head = takeinput();
        int pos, data;
        cin >> pos >> data;
        head = insertNode(head, pos, data);
        print(head);
    }
}