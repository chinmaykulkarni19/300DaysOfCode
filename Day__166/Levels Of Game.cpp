class Solution{
    public:
        int dp[1010][1010];
       
       int mine(int h, int m, int count)
       {
           if(h<=0 || m<=0)
               return -1;
               
           if(dp[h][m]!=-1)
               return dp[h][m];
               
           if(count%2 == 0)
           {
               return dp[h][m] = 1 + mine(h+3, m+2, count+1);
           }
           else
           {
               return dp[h][m] = 1 + max(mine(h-5, m-10, count+1), mine(h-20, m+5, count+1));
           }
       }
       
       int maxLevel(int h,int m)
       {
           memset(dp, -1, sizeof(dp));
           return mine(h, m, 0);
       }
};