const depthFirstValues2=(root , ans)=>{
    if(root === null)return;
    ans.push(root.val);
    depthFirstValues2(root.left,ans);
    depthFirstValues2(root.right,ans);
  }
  const depthFirstValues=(root)=>{
    if(root === null)return [];
    const  ans =[];
    depthFirstValues2(root , ans);
    return ans;
  }
  