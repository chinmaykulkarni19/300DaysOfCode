class Solution
{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int helper(int eggs,int floors,vector<vector<int>>&dp)
    {
        if(floors==0 || floors==1)
        {
            return dp[eggs][floors]=floors;
        }
        if(eggs==1)
        return dp[eggs][floors]=floors;
        if(dp[eggs][floors]!=-1)
        return dp[eggs][floors];
        int mini=INT_MAX;
        for(int k=1;k<=floors;k++)
        {
            int attempt=1+max(helper(eggs-1,k-1,dp),helper(eggs,floors-k,dp));
            mini=min(mini,attempt);
            
        }
        return dp[eggs][floors]=mini;
    }
    int eggDrop(int n, int k) 
    {
        vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
        return helper(n,k,dp);
    }
};