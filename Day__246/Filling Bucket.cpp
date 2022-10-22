int fillingBucket(int N) {
        vector<int>dp(N+1);
        if(N<=2)
        {
            return N;
        }
        dp[0]=dp[1]=1;
        for(int i=2;i<=N;i++)
        {
            dp[i]=(dp[i-1]+dp[i-2])%MOD;
        }
        return dp[N];
    }