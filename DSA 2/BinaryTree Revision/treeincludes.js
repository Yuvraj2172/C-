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

  const treeIncludes2= (root , target)=>{
    if(root === null)return false;
    if(root.val === target)return true;
    return treeIncludes(root.left, target) || treeIncludes(root.right , target);
  }