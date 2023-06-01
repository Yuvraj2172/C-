const linkedListValues = (head) => {
    const ans =[];
    let temp = head;
    while(temp!=null){
      ans.push(temp.val);
      temp = temp.next;
    }
    return ans;
  };