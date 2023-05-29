const treeMinValue = (root) => {
    if(root === null)return Infinity;
    let ans = Infinity;
    const q =[root];
    while(q.length>0){
      const current = q.shift();
      if(current.val < ans)ans = current.val;
      if(current.left)q.push(current.left);
      if(current.right)q.push(current.right);
    }
    return ans;
  };