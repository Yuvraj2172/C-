const maxPathSum = (root) => {
    if(root === null)return -Infinity;
    if(root.left === null && root.right === null)return root.val;
    let leftAns = maxPathSum(root.left);
    let rightAns = maxPathSum(root.right);
    return (leftAns > rightAns ? leftAns : rightAns) + root.val;
  };