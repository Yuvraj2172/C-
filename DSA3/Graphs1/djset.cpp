#include <bits/stdc++.h>
using namespace std;
class DisjointSet
{
    vector<int> rank, parent, size;

public:
    DisjointSet(int n)
    {
        size.resize(n + 1, 0);

        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        for (int i = 0; i < n + 1; i++)
        {
            parent[i] = i;
            size[i] = 1;
        }
    }
    int findUp(int node)
    {
        if (node == parent[node])
            return node;
        return parent[node] = findUp(parent[node]); // Path Compression.
    }
    void unionByRank(int u, int v)
    {
        int ulp_u = findUp(u);
        int ulp_v = findUp(v);
        if (ulp_u == ulp_v)
            return;
        if (rank[ulp_u] < rank[ulp_v])
            parent[ulp_u] = ulp_v;
        else if (rank[ulp_v] < rank[ulp_u])
            parent[ulp_v] = ulp_u;
        else
        {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }
    void unionBySize(int u, int v)
    {
        int ulp_u = findUp(u);
        int ulp_v = findUp(v);
        if (ulp_u == ulp_v)
            return;
        if (size[ulp_u] < size[ulp_v])
        {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else
        {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};

int main()
{
    DisjointSet ds(7);
    ds.unionBySize(1, 2);
    ds.unionBySize(2, 3);
    ds.unionBySize(4, 5);
    ds.unionBySize(6, 7);
    ds.unionBySize(5, 6);
    // if 3 and 7 belong to the same set or not...
    if (ds.findUp(3) == ds.findUp(7))
        cout << "Same\n";
    else
        cout << "Not Same\n";

    ds.unionBySize(3, 7);
    if (ds.findUp(3) == ds.findUp(7))
        cout << "Same\n";
    else
        cout << "Not Same\n";

    return 0;
}