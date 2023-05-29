const treeMinValue = (root) => {
  if (root === null) return Infinity;
  let ans = Infinity;
  const q = [root];
  while (q.length > 0) {
    const current = q.shift();
    if (current.val < ans) ans = current.val;
    if (current.left) q.push(current.left);
    if (current.right) q.push(current.right);
  }
  return ans;
};

const treeMinValue2 = (root) => {
  if (root === null) return Infinity;
  const leftAns = treeMinValue2(root.left);
  const rightAns = treeMinValue2(root.right);
  return Math.min(root.val, leftAns, rightAns);
};
