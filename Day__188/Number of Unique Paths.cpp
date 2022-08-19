class Solution
{
    public:
    //Function to find total number of unique paths.
    int dp[16][16];
    int solve(int a,int b,int i ,int j)
    {
        if(i==a-1||j==b-1)
        return 1;
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        return dp[i][j]=solve(a,b,i+1,j)+solve(a,b,i,j+1);
    }
    int NumberOfPath(int a, int b)
    {
        memset(dp,-1,sizeof(dp));
        return solve(a,b,0,0);
    }
};