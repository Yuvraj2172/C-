const treeIncludes = (root, target) => {
    if(root === null)return false;
    const q  = [root];
    while(q.length>0){
      const current = q.shift();
      if(current.val === target)return true;
      if(current.left!= null)q.push(current.left);
      if(current.right != null) q.push(current.right);
    }
    return false;
  };