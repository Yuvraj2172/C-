const zipperLists = (head1, head2) => {
    let tail = head1;
    let current1 =  head1.next;
    let current2 = head2;
    let i=0;
    while(current1 !== null && current2!== null){
      if(i%2===0){
        tail.next = current2;
        current2= current2.next;
      }
      else {
        tail.next = current1;
        current1 = current1.next;
      }
      tail = tail.next;
      i++;
      
    }
    if(current1!== null)tail.next = current1;
    if(current2!== null) tail.next = current2;
    return head1;
  };
  