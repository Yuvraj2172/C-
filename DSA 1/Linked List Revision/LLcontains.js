const linkedListFind = (head, target) => {
    while(head!=null){
      if(head.val === target)return true;
      head = head.next;
    }
    return false;
  };