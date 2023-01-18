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
int length(Node *head) {
  int len = 0;
  Node *temp = head;
  while (temp != NULL) {
    len++;
    temp = temp->next;
  }
  return len;
}
bool isPalindrome(Node *head)
{
	if(head==NULL || head->next==NULL)return true;
	int len = length(head);
	int arr[len];
	int i =0;
	Node*temp = head;
	while(temp!=NULL){
		arr[i] = temp->data;
		i++;
		temp = temp->next;
	}
	int j = len-1;
	i=0;
	while(i<j){
		if(arr[i]!=arr[j]){
			return false;
		}
		i++;
		j--;
	}
	return true;

}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		bool ans = isPalindrome(head);

		if (ans) cout << "true";
		else cout << "false";

		cout << endl;
	}

	return 0;
}