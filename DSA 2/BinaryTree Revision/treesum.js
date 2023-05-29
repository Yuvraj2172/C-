const treeSum = (root) => {
    if(root === null)return 0;
    let ans =0;
    const q = [root];
    while(q.length >0){
      const current = q.shift();
      ans += current.val;
      if(current.left) q.push(current.left);
      if(current.right) q.push(current.right);
    }
    return ans;
  };
  