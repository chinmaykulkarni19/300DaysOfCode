void dfs(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& vis,int row,int col)

    {

        if(i<0||j<0||i>=row||j>=col) return;

        if(vis[i][j]) return;

        if(grid[i][j]==0) return;

        

        vis[i][j]=1;

        

        dfs(i+1,j,grid,vis,row,col);

        dfs(i-1,j,grid,vis,row,col);

        dfs(i,j+1,grid,vis,row,col);

        dfs(i,j-1,grid,vis,row,col);

    }

  

    vector<int> numOfIslands(int n, int m, vector<vector<int>> &arr) {

        // code here

        vector<int> ans;

        vector<vector<int>> grid(n,vector<int>(m,0));

        

        for(auto it:arr)

        {

            grid[it[0]][it[1]]=1;

            int count=0;

            vector<vector<int>> vis(n,vector<int>(m,0));

            for(int i=0;i<n;i++)

            {

                for(int j=0;j<m;j++)

                {

                    if(grid[i][j]==1 && vis[i][j]!=1)

                    {

                        dfs(i,j,grid,vis,n,m);

                        count++;

                    }

                }

            }

            ans.push_back(count);

        }

        return ans;

    }