class Solution{
public:
    const int mod=1000000007;
    long long dp[1001][1001];
    int comb(int n,int k)
    {
        if(k==0 || k==n)
        return 1;
        if(dp[n][k]!=0)
        return dp[n][k];
        else
        return dp[n][k]=(comb(n-1,k)%mod + comb(n-1,k-1)%mod)%mod;
    }
    int knots(int M, int N, int K){
        memset(dp,0,sizeof(dp));
       long long int a =comb(M,K);
       long long int b=comb(N,K);
       return (a%mod * b%mod)%mod;
    }
};