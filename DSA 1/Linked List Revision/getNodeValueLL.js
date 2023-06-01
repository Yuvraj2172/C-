const getNodeValue = (head, index) => {
    while(head!=null){
      if(index==0){
        return head.val;
      }
      index--;
      head = head.next;
    }
    return null;
  };