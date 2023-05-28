const shortestPath = (edges, nodeA, nodeB) => {
  const graph = buildGraph(edges);
  const visited = new Set();
  const queue = [[nodeA, 0]];
  visited.add(nodeA);
  while (queue.length > 0) {
    const [currentNode, distance] = queue.shift();
    if (currentNode === nodeB) return distance;
    for (let neighbor of graph[currentNode]) {
      if (!visited.has(neighbor)) {
        visited.add(neighbor);
        queue.push([neighbor, distance + 1]);
      }
    }
  }
  return -1;
};

const buildGraph = (edges) => {
  const graph = {};
  for (let edge of edges) {
    // edge: [a,b]
    const [a, b] = edge;
    if (!(a in graph)) graph[a] = [];
    if (!(b in graph)) graph[b] = [];
    graph[a].push(b);
    graph[b].push(a);
  }
  return graph;
};
