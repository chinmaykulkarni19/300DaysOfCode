class Solution{

	public:
	int minCoins(int coins[], int M, int V) 
	{ 
	    int dp[M+1][V+1];
	    for(int i=0;i<M+1;i++)
	    {
	        for(int j=0;j<V+1;j++)
	        {
	            if(i==0)
	            {
	                dp[i][j]=INT_MAX-1;
	            }
	            if(j==0)
	            {
	                dp[i][j]=0;
	            }
	            if(j%coins[0]==0)
	            {
	                dp[i][j]=j/coins[0];
	            }
	            else
	            {
	                dp[i][j]=INT_MAX-1;
	            }
	        }
	    }
	    for(int i=2;i<M+1;i++)
	    {
	        for(int j=1;j<V+1;j++)
	        {
	            if(coins[i-1]<=j)
	            {
	                dp[i][j]=min(dp[i-1][j],dp[i][j-coins[i-1]]+1);
	            }
	            else
	            {
	                dp[i][j]=dp[i-1][j];
	            }
	        }
	    }
	    if(dp[M][V]==INT_MAX-1)
	    return -1;
	    else
	    return dp[M][V];
	    
	} 
	  
};