int numberOfSubsequences(string S, string W){
        // code here 
        int j=0;
        int ans=0;
        for(int i=0;i<S.size();i++)
        {
            if(S[i]==W[j])
            {
                S[i]='@';
                j++;
            }
            if(j==W.size())
            {
                ans++;
                i=0;
                j=0;
            }
        }
        return ans;
    }