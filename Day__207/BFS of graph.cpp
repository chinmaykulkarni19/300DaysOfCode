class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int>ans;
          queue<int>q;
          vector<int>vis(V,0);
          q.push(0);
          vis[0]=1;
          while(q.empty()==0)
          {
              int u=q.front();
              ans.push_back(u);
              q.pop();
              for(auto it:adj[u])
              {
                  if(vis[it]==0)
                  {
                      vis[it]=1;
                      q.push(it);
                  }
              }
          }
          return ans;
    }
};