class Solution
{
  public:
    string reverseWords (string s)
    {
        stack<char>res;
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='.')
            {
                while(!res.empty())
                {
                    ans+=res.top();
                    res.pop();
                }
                ans+='.';
            }
            else
            res.push(s[i]);
        }
        while(!res.empty())
        {
            ans+=res.top();
            res.pop();
        }
        return ans;
    }
};