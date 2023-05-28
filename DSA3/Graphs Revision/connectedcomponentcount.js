const connectedComponentsCount = (graph)=>{
    const visited = new Set();
    let  count =0;
    for(let node in graph){
       if( explore(graph, node, visited)===true){
        count+=1;
       }
    }
    return count;
};

const explore = (graph, curr, visited)=>{
    if(visited.has(String(curr)))return false;
    visited.add(String(curr));
    for(let neighbor of graph[curr]){
       explore(graph, neighbor, visited);
    }
    return true;
};