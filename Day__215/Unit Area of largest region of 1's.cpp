class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    void dfs(vector<vector<int>> &M, int i, int j,int &count)
    {
        int n = M.size(), m = M[0].size();
    if (i >= n || j >= m || i < 0 || j < 0 || M[i][j] == 0)
        return;
        M[i][j]=0;
        count++;
        dfs(M,i+1,j,count);
        dfs(M,i-1,j,count);
        dfs(M,i,j+1,count);
        dfs(M,i,j-1,count);
        dfs(M,i+1,j+1,count);
        dfs(M,i-1,j-1,count);
        dfs(M,i+1,j-1,count);
        dfs(M,i-1,j+1,count);
    }
    int findMaxArea(vector<vector<int>>& grid) {
        int ans = 0;
    for (int i = 0; i < grid.size(); i++){
        for (int j = 0; j < grid[i].size(); j++)
        {
            int count=0;
            if(grid[i][j]==1)
                   dfs(grid, i, j,count);
            ans=max(ans,count);
        }
      
    }
    return ans;
    }
};