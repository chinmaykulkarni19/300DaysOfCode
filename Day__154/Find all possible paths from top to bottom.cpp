class Solution
{
public:
    vector<vector<int>> answer;
    void helper(int i,int j,vector<vector<int>>grid,vector<int>v,int n,int m)
    {
            //we've reached the final element
        if(i==n-1&&j==m-1)
        {
            v.push_back(grid[i][j]);
            answer.push_back(v);
            return;
        }
        //Backtracking
        if(i>n-1 || j>m-1)
        return;
        // Normal recursive function 
        v.push_back(grid[i][j]);
        helper(i+1,j,grid,v,n,m);
        helper(i,j+1,grid,v,n,m);
        return;
    }
    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
    {
        if(grid.size()==0)
        return {{}};
        vector<int>v;
        helper(0,0,grid,v,n,m);
        return answer;
    }
};