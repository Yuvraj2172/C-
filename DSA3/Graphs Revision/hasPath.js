const hasPathBFS = (graph, src, dest) => {
  if (src === dest) return true;
  const queue = [src];
  while (queue.length > 0) {
    const current = queue.shift();
    if (current === dest) {
      return true;
    }
    for (let neighbor of graph[current]) {
      queue.push(neighbor);
    }
  }
  return false;
};

const hasPathDFS = (graph, src, dest) => {
  if (src === dest) return true;
  for (let neighbor of graph[src]) {
    if (hasPathDFS(graph, neighbor, dest) === true) {
      return true;
    }
  }
  return false;
};

const graph = {
  f: ["g", "i"],
  g: ["h"],
  h: [],
  i: ["g", "k"],
  j: ["i"],
  k: [],
};

console.log(hasPathBFS(graph, "f", "k"));
console.log(hasPathDFS(graph, "f", "k"));
