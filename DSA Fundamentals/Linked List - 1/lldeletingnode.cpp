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
Node *deleteNode(Node *head, int pos)
{
	if (pos == 0)
	{
		head = head->next;
		return head;
	}
	// int idx= 0;
	Node *temp = head;
	for (int i = 0; i < pos - 1 && (temp != NULL); i++)
	{
		temp = temp->next;
	}
	if (temp->next != NULL)
	{
		temp->next = temp->next->next;
		return head;
	}
	return head;
}
Node *deleteAlternate(Node *head)
{
	if (head == NULL || head->next == NULL)
		return head;
	Node *temp = head;
	while (temp != NULL && temp->next != NULL)
	{
		temp->next = temp->next->next;
		temp = temp->next;
	}
	return head;
}
Node *reverseList(Node *head)
{
	Node *prev = head;
	Node *curr = head->next;
	while (curr != NULL)
	{
		Node *temp = curr->next;
		curr->next = prev;
		prev = curr;
		curr = temp;
	}
	head->next = NULL;
	head = prev;
	return head;
}
Node *add(Node *head)
{	
	if(head==NULL)return head;
	if(head->next !=NULL){
		head = reverseList(head);
	}
	if(head->next == NULL && head->data !=9){
		head->data  = head->data +1;
		return head;
	}
	Node *l1 = head;
	Node *res = new Node(0);
	Node *temp = res;
	int sum = 0;
	int carry = 0;
	while (l1 != NULL || carry != 0)
	{
		if (l1 == head)
		{
			sum = l1->data + 1;
			l1 = l1->next;
			carry = sum / 10;
			temp->next = new Node(sum % 10);
			temp = temp->next;
		}
		sum = carry;
		if (l1 != NULL)
		{
			sum = l1->data + carry;
			l1 = l1->next;
		}
		if(carry!=0){
		carry = sum / 10;
		temp->next = new Node(sum % 10);
		temp = temp->next;
		}else{
			carry = sum / 10;
		temp->next = new Node(sum % 10);
		temp = temp->next;
		}
		
	}
	res = reverseList(res->next);
	return res;
}
int main()
{
	// int t;
	// cin >> t;

	// while (t--)
	// {
	Node *head = takeinput();
	// int pos;
	Node *res = add(head);
	print(res);
	// }

	return 0;
}