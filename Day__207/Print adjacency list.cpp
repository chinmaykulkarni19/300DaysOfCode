class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<int> adj[]) {
        vector<vector<int>>res(V);
        for(int i=0;i<V;i++)
        {
            res[i].push_back(i);
            for(auto it:adj[i])
            {
                res[i].push_back(it);
            }
        }
        return res;
    }
};