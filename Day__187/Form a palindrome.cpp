class Solution{   
public:
    int lcs(string s1,string s2,int n,int m)
    {
        int dp[n+1][m+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<m+1;j++)
            {
                if(i==0||j==0)
                {
                    dp[i][j]=0;
                }
            }
        }
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                if(s1[i-1]==s2[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
    }
    int findMinInsertions(string S){
        string s2=S;
        reverse(S.begin(),S.end());
        int n=S.size();
        int ans=lcs(S,s2,n,n);
        return n-ans;
        
        
        
    }
};