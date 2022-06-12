class Solution
{
    public:
    //Function to remove consecutive duplicates from given string using Stack.
    string removeConsecutiveDuplicates(string s)
    {
        stack<char>res;
        string ans;
        for(int i=0;i<s.size();i++)
        {
            if(res.empty())
            {
                res.push(s[i]);
            }
            else
            {
                if(res.top()==s[i])
                {
                    res.pop();
                    res.push(s[i]);
                }
                else
                {
                    res.push(s[i]);
                }
            }
        }
        while(!res.empty())
        {
            ans+=res.top();
            res.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};