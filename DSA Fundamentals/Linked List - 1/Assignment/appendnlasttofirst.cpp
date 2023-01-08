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
/****************************************************************
 
    Following is the class structure of the Node class:

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

*****************************************************************/
int length(Node *head) {
  Node *temp = head;
  int len = 0;
  while (temp != NULL) {
    len++;
    temp = temp->next;
  }
  return len;
}
Node *appendLastNToFirst(Node *head, int n) {
  int len = length(head);
  if(n>len)return head;
  if (n == 0) {
    return head;
  }
  Node *newtail = NULL;
  Node *newhead = NULL;
  Node *temp = head;
  int i = 1;

  while (temp != NULL) {
    if (i == len - n) {
    //   cout << "i : " << i << endl;
      newtail = temp;
      newhead = temp->next;
      newtail->next = NULL;
      break;
    }
    temp = temp->next;
    i++;
  }
  // cout<<newtail->data<<endl<<newhead->data<<" "<<"\n";
  temp = newhead;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = head;
  head = newhead;
  return head;
}


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int n;
		cin >> n;
		head = appendLastNToFirst(head, n);
		print(head);
	}
	return 0;
}