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

Node *skipMdeleteN(Node *head, int m, int n)
{
	if(head==NULL || n==0 )return head;
    if(m==0 )return NULL;
	Node* t= head;
	while(t!=NULL){
		int c1 = 1;
		while(c1<m && t!=NULL){
			t = t->next;
			c1++;
		}
		if(t==NULL){
			return head;
		}
		int c2 = 1;
		Node* t2 = t->next;
		while(c2<=n && t2!=NULL){
			Node* temp = t2;
			t2=t2->next;
			free(temp);
			c2++;
		}
		t ->next = t2;
		t = t2;
	}
    return head;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int m, n;
		cin >> m >> n;
		head = skipMdeleteN(head, m, n);
		print(head);
	}
	return 0;
}