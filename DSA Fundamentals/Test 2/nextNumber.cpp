/**********
 * Following is the Node class that is already written.
 
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
 
*********/
Node *reverseList(Node *head) {
  Node *prev = head;
  Node *curr = head->next;
  while (curr != NULL) {
    Node *temp = curr->next;
    curr->next = prev;
    prev = curr;
    curr = temp;
  }
  head->next = NULL;
  head = prev;
  return head;
}
Node* NextLargeNumber(Node *head) {
  if (head == NULL)
    return head;
  if (head->next != NULL) {
    head = reverseList(head);
  }
  if (head->next == NULL && head->data != 9) {
    head->data = head->data + 1;
    return head;
  }
  Node *l1 = head;
  Node *res = new Node(0);
  Node *temp = res;
  int sum = 0;
  int carry = 0;
  while (l1 != NULL || carry != 0) {
    if (l1 == head) {
      sum = l1->data + 1;
      l1 = l1->next;
      carry = sum / 10;
      temp->next = new Node(sum % 10);
      temp = temp->next;
    }
    sum = carry;
    if (l1 != NULL) {
      sum = l1->data + carry;
      l1 = l1->next;
    }
    if (carry != 0) {
      carry = sum / 10;
      temp->next = new Node(sum % 10);
      temp = temp->next;
    } else {
      carry = sum / 10;
      temp->next = new Node(sum % 10);
      temp = temp->next;
    }
  }
  res = reverseList(res->next);
  return res;
}


