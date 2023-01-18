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
#include "solution.h"

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
Node* merge(Node* left, Node* right){
  Node* head = NULL, *tail =NULL;
  if(left==NULL && right ==NULL)return head;
  if(left==NULL)return right;
  if(right ==NULL)return left;
  if(left->data <= right ->data){
    head = left;
    tail = left;
    left = left->next;
  }
  else {
    head = right;
    tail = right ;
    right = right ->next;
  }
  while(left!=NULL && right !=NULL){
    if(left->data <= right ->data){
        tail ->next = left;
        tail = left;
        left = left ->next;
    }
    else {
        tail ->next = right;
        tail = right;
        right = right ->next;
    }
  }
  while(left!=NULL){
    tail->next = left;
    tail = left;
    left = left ->next;
  }
  while(right!=NULL){
    tail->next = right;
    tail = right;
    right = right ->next;
  }
  tail ->next = NULL;
  return head;
}
Node* findmid(Node * head){
    if(head==NULL && head->next ==NULL)return head;
    Node* slow = head;
    Node* fast = slow ;
    while(fast!=NULL && fast->next !=NULL){
        slow = slow ->next;
        fast = fast->next->next;
    }
    return slow;
}
Node *mergeSort(Node *head)
{
	if(head==NULL || head->next ==NULL)return head;
    Node* mid = findmid(head);
    Node* left = head;
    Node* right = mid->next;
    mid->next = NULL;
    left = mergeSort(left);
    right = mergeSort(right);
    Node* result = merge(left , right);
    return result;
}
int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		head = mergeSort(head);
		print(head);
	}

	return 0;
}