class Solution{
    public:
    int findSubString(string str)
    {   set<char>s;
        for(char c :str)
        {
            s.insert(c);
        }
        unordered_map<char,int>res;
        int i=0;
        int j=0;
        int ans=str.size();  //all characters can be distinct
        int n=s.size();
        while(i<str.size())
        {
            res[str[i]]++;
            if(res.size()==n)
            {
                while(res[str[j]]>1)
                {
                    res[str[j++]]--;
                    
                }
                ans=min(ans,i-j+1);
            }
            i++;
        }
        return ans;
    }
};