const depthFirstValues = (root)=>{
    const stack =[root];
  const ans = [];
  if(root==null)return ans;
    while(stack.length>0){
        const current =stack.pop();
      ans.push(current.val);
        if(current.right!=null)stack.push(current.right);
      if(current.left!=null)stack.push(current.left);
    }
  return ans;
};