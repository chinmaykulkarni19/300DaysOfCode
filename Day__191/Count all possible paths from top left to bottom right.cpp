class Solution {
  public:
     int solve(int x,int y,int m,int n,vector<vector<long long int>> &dp)
   {
       if(x==m-1 && y==n-1)
       {
           return 1;
       }
       if(x>=m || y>=n)
       {
           return 0;
       }
       if(dp[x][y]!=-1)
       {
           return dp[x][y];
       }
       return dp[x][y]=(solve(x,y+1,m,n,dp) + solve(x+1,y,m,n,dp)) % 1000000007;
   }
   long long int numberOfPaths(int m, int n){
       // code here
       vector<vector<long long int>> dp(m,vector<long long int>(n,-1));
       solve(0,0,m,n,dp);
       return dp[0][0] % 1000000007 ;
   }
};