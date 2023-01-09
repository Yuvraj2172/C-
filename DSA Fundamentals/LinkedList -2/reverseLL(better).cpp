class Pair {
public:
  Node *head;
  Node *tail;
};
Pair reverseLL_2(Node *head) {
  if (head == NULL || head->next == NULL) {
    Pair ans;
    ans.head = head;
    ans.tail = head;
    return ans;
  }
  Pair smallAns = reverseLL_2(head->next);
  smallAns.tail->next = head;
  head->next = NULL;
  Pair ans;
  ans.head = smallAns.head ;
  ans.tail = head;
  return ans;
}
Node *reverseLinkedListRec(Node *head) { return reverseLL_2(head).head; }