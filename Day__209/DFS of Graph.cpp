class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int>ans;
        vector<bool>vis(V,0);
        helper(ans,vis,adj,0);
        return ans;
    }
    void helper(vector<int>&ans,vector<bool>&vis,vector<int> adj[],int node)
    {
        if(vis[node])return;
        ans.push_back(node);
        vis[node]=true;
        for(auto it:adj[node]){
            helper(ans,vis,adj,it);
        }
    }
};