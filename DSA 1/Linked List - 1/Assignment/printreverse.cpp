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

//Withouf Recursion
int length(Node* head){
	int len =0;
	Node* temp = head;
	while(temp!=NULL){
		len++;
		temp = temp ->next;
	}
	return len;
}
void printReverse(Node *head)
{
	int len = length(head);
	if(len==0)return;
        if (len==1) {
          cout << head->data<<" ";
		  cout<<"\n";
		  return;
        }
		// cout<<len<<" ";
        int arr[1000];
		Node* temp = head;
		int i=0;
		while(i<len){
			arr[i] = temp->data;
			temp = temp->next;
			i++;
		}
		for(int ind = i-1;ind>=0;ind--){
			cout<<arr[ind]<<" ";
		}
		cout<<"\n";
		return;
}
void printReverserecursively(Node *head)
{
    if(head==NULL)return;
	printReverserecursively(head->next);
	cout<<head->data<<" ";
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		printReverse(head);
		cout << endl;
	}
	return 0;
}