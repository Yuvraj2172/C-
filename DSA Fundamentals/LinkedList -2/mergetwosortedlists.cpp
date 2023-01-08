//  Code: Merge Two Sorted LL
// You have been given two sorted(in ascending order) singly linked lists of integers.
// Write a function to merge them in such a way that the resulting singly linked list is also sorted(in ascending order) and return the new head to the list.
// Note :

// Try solving this in O(1) auxiliary space.

// No need to print the list, it has already been taken care.

#include <iostream>
using namespace std;
// #include "solution.h"
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

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{	
    if(head1==NULL)return head2;
	if(head2==NULL) return head1;
	// if(head1==NULL && head2 ==NULL)return  head1;

	Node* fasthead=NULL;
	Node* fasttail = NULL;
	Node*temp1 = head1;
	Node* temp2 = head2;

	if(temp1->data <= temp2->data){
		fasthead = temp1;
		temp1 = temp1->next;
	}
	else {
		fasthead = temp2;
		temp2 = temp2->next;
	}
	fasttail= fasthead;
	while(temp1!=NULL && temp2!=NULL){
		if(temp1->data <=temp2->data){
			fasttail ->next = temp1;
			temp1 = temp1->next;
		}
		else {
			fasttail ->next = temp2;
			temp2 = temp2 ->next;
		}
		fasttail = fasttail ->next;
	}
	if(temp1!=NULL){
		fasttail ->next = temp1;
	}
	if(temp2!=NULL) {
		fasttail ->next = temp2;
	}
	return fasthead;
}void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}
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
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head1 = takeinput();
		Node *head2 = takeinput();
		Node *head3 = mergeTwoSortedLinkedLists(head1, head2);
		print(head3);
	}
	return 0;
}