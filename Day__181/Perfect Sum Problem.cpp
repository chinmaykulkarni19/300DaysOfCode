class Solution{

	public:
	int perfectSum(int arr[], int n, int sum)
	{
        long long dp[n+1][sum+1];
        long long mod=1e9+7;
        int zero=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            zero++;
        }
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<sum+1;j++)
            {
                if(i==0)
                {
                    dp[i][j]=0;
                }
                if(j==0)
                {
                    dp[i][j]=1;
                }
            }
        }
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<sum+1;j++)
            {
                if(arr[i-1]<=j && arr[i-1]!=0)
                {
                    dp[i][j]=((dp[i-1][j]%mod)+(dp[i-1][j-arr[i-1]]%mod))%mod;
                }
                else
                {
                    dp[i][j]=dp[i-1][j]%mod;
                }
            }
        }
        return pow(2,zero)*dp[n][sum]; 
	}
	  
};