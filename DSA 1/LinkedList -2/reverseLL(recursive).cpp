// Given a singly linked list of integers, reverse it using recursion and return the head to the modified list. You have to do this in O(N) time complexity where N is the size of the linked list.
//  Note :

// No need to print the list, it has already been taken care. Only return the new head to the list.


Node *reverseLinkedListRec(Node *head)
{
  if(head==NULL || head->next ==NULL)return head;
  Node* smallAns = reverseLinkedListRec(head->next);
  Node* temp  = smallAns;
  while(temp->next !=NULL){
    temp = temp ->next;
  }
  temp->next = head;
  head ->next  = NULL;
  return smallAns;
}