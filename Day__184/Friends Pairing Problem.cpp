class Solution
{
public:
    long long int helper(int n,vector<int>&dp)
    {
        if(n==1)
        return 1;
        if(n==2)
        return 2;
        if(n==3)
        return 4;
        if(dp[n]!=-1)
        return dp[n];
        return dp[n]=(helper(n-1,dp)+(n-1)*helper(n-2,dp))%1000000007;
    }
    int countFriendsPairings(int n) 
    { 
        vector<int>dp(n+1,-1);
        return helper(n,dp);
    }
};   