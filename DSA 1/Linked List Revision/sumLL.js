const sumList = (head) => {
    let ans =0;
    let temp = head;
    while(temp!=null){
      ans += temp.val;
      temp = temp.next;
    }
    return ans;
  };