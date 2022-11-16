int beautySum(string s) {
        // Your code goes here
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            int freq[26]={0};
            for(int j=i;j<s.size();j++)
            {
                freq[s[j]-'a']++;
                int mx=INT_MIN;
                int mi=INT_MAX;
                for(int k=0;k<26;k++)
                {
                    if(freq[k]!=0)
                    {
                        mx=max(mx,freq[k]);
                        mi=min(mi,freq[k]);
                    }
                }
                ans+=mx-mi;
            }
        }
        return ans;
    }