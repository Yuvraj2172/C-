const reverseList = (head) => {
    if(head === null || head.next === null)return head;
    let curr = head;
    let prev = null;
    while(curr!=null){
      const temp = curr.next;
      curr.next = prev;
      prev = curr;
      curr = temp;
    }
    return prev;
  };