// Given a singly linked list of integers and position 'i', delete the node present at the 'i-th' position in the linked list recursively.
//  Note :

// Assume that the Indexing for the linked list always starts from 0.

// No need to print the list, it has already been taken care. Only return the new head to the list.

#include <iostream>

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

using namespace std;
// #include "solution.h"

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
		cin >> data;
	}
	return head;
}
Node *deleteNodeRec(Node *head, int pos) {
	if(head==NULL)return head;
	if(pos-1<0){
		head  = head->next;
		return head;
	}
	if(pos-1==0 && head->next !=NULL){
		head->next = head -> next -> next;
		return head;
	}
	head ->next = deleteNodeRec(head->next, pos-1);
	return head;
}

void deleteAlternate(Node* head){
	if(head==NULL || head->next==NULL)return head;
}
void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		int pos;
		cin >> pos;
		head = deleteNodeRec(head, pos);
		print(head);
	}

	return 0;
}