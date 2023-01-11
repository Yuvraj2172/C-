// Even after Odd LinkedList
// For a given singly linked list of integers, arrange the elements such that all the even numbers are placed after the odd numbers. The relative order of the odd and even terms should remain unchanged.
// Note :
// No need to print the list, it has already been taken care. Only return the new head to the list
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

Node *evenAfterOdd(Node *head)
{
	if(head == NULL || head->next == NULL )return head; 
	Node* oddh = NULL ;
	Node* oddt = NULL;
	Node* evenh = NULL;
	Node* evenT =NULL;
	Node* temp = head;
	while(temp !=NULL){
		if(temp->data %2!=0){
			if(oddh ==NULL){
				oddh = temp ;
				oddt =  oddh;
                temp = temp ->next;
			}
			else {
				oddt->next  =temp;
                oddt = temp;
                 temp = temp ->next;
			}
		}
		else {
			if(evenh == NULL){
				evenh = temp;
				evenT = evenh;
                 temp = temp ->next;
			}
			else {
				evenT->next = temp;
                evenT = temp;
                 temp = temp ->next;
			}
		}
		
	}
    // print(oddh);
    // print(evenh);
    if(oddh!=NULL && evenh!=NULL ){
        oddt->next = evenh;
        evenT->next = NULL;
        return oddh;
    }
    else if( oddh== NULL ){
        return evenh;
    }
    else if(evenh==NULL){
        oddt->next = NULL;
        return oddh;
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		head = evenAfterOdd(head);
		print(head);
	}
	return 0;
}
