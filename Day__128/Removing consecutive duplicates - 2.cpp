class Solution
{
    public:
    //Function to remove pair of duplicates from given string using Stack.
    string removePair(string str)
    {
        stack<char>res;
        string ans;
        for(int i=0;i<str.size();i++)
        {
            if(res.empty())
            {
                res.push(str[i]);
            }
            else
            {
                if(res.top()==str[i])
                {
                    res.pop();
                }
                else
                {
                    res.push(str[i]);
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