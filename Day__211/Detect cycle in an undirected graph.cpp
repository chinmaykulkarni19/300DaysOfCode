class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    
    bool dfs(vector<int> adj[],int s,vector<bool>&vis,int parent)
    {
        vis[s]=true;
        for(auto it:adj[s])
        {
            if(vis[it]==false)
            {
                if(dfs(adj,it,vis,s)==true)
                {
                    return true;
                    
                }
            }
            else if(it!=parent)
            {
                return true;
            }
                
            
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        vector<bool>vis(V,0);
        for(int i=0;i<V;i++)
        {
            if(vis[i]==false)
            {
                if(dfs(adj,i,vis,-1)==true)
                {
                    return true;
                }
            }
        }
        return false;
    }
};