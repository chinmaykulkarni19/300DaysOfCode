int solve(int i,int j,int m,int n,vector<vector<long long int>> &dp)
    {
        if(i==m-1 && j==n-1)
        {
            return 1;
        }
        if(i>=m || j>=n)
        {
            return 0;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        return dp[i][j]=(solve(i+1,j,m,n,dp)+solve(i,j+1,m,n,dp))% 1000000007;
    }
    long long int numberOfPaths(int m, int n){
        vector<vector<long long int>> dp(m,vector<long long int>(n,-1));
        return solve(0,0,m,n,dp)% 1000000007;
    }