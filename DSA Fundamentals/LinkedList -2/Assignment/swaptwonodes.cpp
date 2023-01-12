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
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
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
Node *swapNodes(Node *head, int i, int j)
{
	if(i>j)swap(i,j);
	if(i==0){
		if(j==1){
			Node* curr= head->next;
			head->next = curr->next;
			curr->next  = head;
			return curr;
		}
		Node* pt = head;
		for(int c=1; c<j;c++){
			pt = pt->next;
		}
		Node* temp = head->next;
		Node* curr = pt->next;
		head->next = curr->next;
		curr->next = temp;
		pt->next = head;
		return curr;
	}
	if(j-i==1){
		Node* pt = head;
		for(int c=1;c<i;c++){
			pt = pt->next;
		}
		Node* curr= pt->next;
		Node* curr1 = curr->next;
		
		pt->next = curr1;
		curr->next = curr1->next;
		curr1->next = curr;
		return head;
	}
	Node* pt1 = head;
	Node* pt2 = head;
	for(int c = 1; c<i;c++){
		pt1 = pt1->next;
	}
	for(int c = 1;c<j;c++){
		pt2 = pt2->next;
	}
	Node* curr1 = pt1->next;
	Node* curr2 = pt2->next;

    Node *temp = curr1->next;
    curr1->next = curr2->next;
	pt2->next = curr1;
	pt1->next = curr2;
	curr2->next = temp;
	return head;
	

}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int i, j;
		Node *head = takeinput();
		cin >> i;
		cin >> j;
		head = swapNodes(head, i, j);
		print(head);
	}
	return 0;
}