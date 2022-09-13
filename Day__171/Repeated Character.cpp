class Solution
{
  public:
    char firstRep (string s)
    {
        unordered_map<char,int>res;
        int i;
        for(i=0;i<s.size();i++)
        {
            res[s[i]]++;
            
        }
        for(i=0;i<s.size();i++)
        {
            if(res[s[i]]>=2)
            return s[i];
        }
        return '#';
    }
};