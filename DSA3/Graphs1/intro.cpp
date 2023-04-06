//BFS of a Graph
// Given a directed graph. The task is to do Breadth First Traversal of this graph starting from 0.
// Note: One can move from node u to node v only if there's an edge from u to v and find the BFS traversal of the graph starting from the 0th vertex, from left to right according to the graph. Also, you should only take nodes directly or indirectly connected from Node 0 in consideration.

vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> vis(V,false);
        int s=0;
        vis[s] = true;
        vector<int> res;
        queue<int> q;
        q.push(s);
        while(!q.empty()){
            int t = q.front();
            res.push_back(t);
            q.pop();
            for(auto it : adj[t]){
                if(!vis[it]){
                    vis[it] = true;
                    q.push(it);
                }
            }
        }
        return res;
    }