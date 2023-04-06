// DFS of Graph
 
// You are given a connected undirected graph. Perform a Depth First Traversal of the graph.
// Note: Use a recursive approach to find the DFS traversal of the graph starting from the 0th vertex from left to right according to the graph.

 void dfs(int node, vector<int> adj[], int vis[], vector<int> &ls){
        vis[node] =1;
        ls.push_back(node);
        // traverse all its neighbours
        for(auto it : adj[node]){
            if(!vis[it]){
                dfs(it , adj, vis, ls);
            }
        }
    }
  public:
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        int vis[V]={0};
        int start = 0;
        vector<int> ls;
        dfs(start, adj, vis, ls);
        return ls;
    }