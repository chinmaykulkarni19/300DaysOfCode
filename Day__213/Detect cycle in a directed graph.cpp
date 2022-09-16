class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool dfs(int s,vector<int> adj[],vector<bool>&vis,vector<bool>&rec)
    {
        vis[s]=true;
        rec[s]=true;
        for(auto i:adj[s])
        {
            if(vis[i]==false && dfs(i,adj,vis,rec)==true)
            {
                return true;
            }
            else if(rec[i]==true)
            {
                return true;
            }
        }
        rec[s]=false;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        vector<bool>vis(V,0);
        vector<bool>rec(V,0);
        for(int i=0;i<V;i++)
        {
            if(vis[i]==false)
            {
                if(dfs(i,adj,vis,rec)==true)
                {
                    return true;
                }
            }
        }
        return false;
    }
};